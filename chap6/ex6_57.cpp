// ex6_57
// Computer-Assisted Instruction

#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int cai_generate_answer(int number1, int number2);
void cai_correct_answer();
void cai_wrong_answer();
int cai_one_digit();
void cai_init();

int random_between(int min, int max);
void random_init();

int main()
{
    cai_init();

    while (1)
    {
        int digit1 = cai_one_digit();
        int digit2 = cai_one_digit();

        int result = digit1 * digit2;
        int answer;

        do
        {
            answer = cai_generate_answer(digit1, digit2);

            if (answer != result)
            {
                cai_wrong_answer();
            }
        } while (answer != result);

        cai_correct_answer();
    }
}

int cai_generate_answer(int number1, int number2)
{
    int answer;

    cout << "How much is " << number1 << " x " << number2 << "? (CTRL+C quit) ";
    cin >> answer;

    return answer;
}

void cai_correct_answer()
{
    cout << "Very good!" << endl;
}

void cai_wrong_answer()
{
    cout << "No. Please try again." << endl;
}

int cai_one_digit()
{
    return random_between(0, 10);
}

void cai_init()
{
    random_init();
}

int random_between(int min, int max)
{
    return min + rand() % (max - min);
}

void random_init()
{
    srand(static_cast<unsigned int>(time(0)));
}