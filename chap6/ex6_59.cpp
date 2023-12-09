// ex6_59
// Computer-Assisted Instruction: Monitoring Student Performance

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

    int number_answers = 0;
    int wrong = 0;
    const int questions = 10;

    while (number_answers < questions)
    {
        int digit1 = cai_one_digit();
        int digit2 = cai_one_digit();

        int result = digit1 * digit2;
        int answer;

        number_answers++;

        cout << "Question # " << number_answers << " of " << questions << endl;
        answer = cai_generate_answer(digit1, digit2);

        if (answer != result)
        {
            wrong++;
            cai_wrong_answer();
        }
        else
        {
            cai_correct_answer();
        }
    }

    if (static_cast<float>(wrong) / static_cast<float>(questions) > .25)
    {
        cout << "Please ask your instructor for extra help" << endl;
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
    switch (random_between(0, 4))
    {
    case 0:
        cout << "Very good!" << endl;
        break;
    case 1:
        cout << "Excellent!" << endl;
        break;
    case 2:
        cout << "Nice work!" << endl;
        break;
    case 3:
        cout << "Keep up the good work!" << endl;
        break;
    default:
        cout << "Something got wrong!" << endl;
        break;
    }
}

void cai_wrong_answer()
{
    switch (random_between(0, 4))
    {
    case 0:
        cout << "No, Please try again." << endl;
        break;
    case 1:
        cout << "Wrong. Try once more." << endl;
        break;
    case 2:
        cout << "Don't give up!" << endl;
        break;
    case 3:
        cout << "No. Keep trying." << endl;
        break;
    default:
        cout << "Something got wrong!" << endl;
        break;
    }
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