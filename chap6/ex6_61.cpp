// ex6_61
// Computer-Assisted Instruction: Varying the Types of Problems

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int cai_operator();
int cai_generate_answer(int number1, int number2, int operatorSymbol);
void cai_correct_answer();
void cai_wrong_answer();
int cai_number(int level);
void cai_init();

int random_between(int min, int max);
void random_init();

int main()
{
    cai_init();

    int number_answers = 0;
    int wrong = 0;
    const int questions = 10;
    int level = -1;
    int type = -1;
    int operatorSymbol;

    do
    {
        cout << "Select problems type:" << endl;
        cout << "1 - Add" << endl;
        cout << "2 - Sub" << endl;
        cout << "3 - Mul" << endl;
        cout << "4 - Div" << endl;
        cout << "5 - Random mixture of all these" << endl;
        cin >> type;
    } while (type < 1 || type > 5);

    do
    {
        cout << "Select Level (1 for one digit numbers, 2 for two digits, and so on. Max 4) ";
        cin >> level;
    } while (level < 1 || level > 4);

    while (number_answers < questions)
    {
        int num1 = cai_number(level);
        int num2 = cai_number(level);

        int result;
        int answer;

        switch (type)
        {
        case 1:
            result = num1 + num2;
            operatorSymbol = '+';
            break;
        case 2:
            result = num1 - num2;
            operatorSymbol = '-';
            break;
        case 3:
            result = num1 * num2;
            operatorSymbol = '*';
            break;
        case 4:
            result = num1 / num2;
            operatorSymbol = '/';
        case 5:
            operatorSymbol = cai_operator();
            switch (operatorSymbol)
            {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            }
            break;
        }

        number_answers++;

        cout << "Question # " << number_answers << " of " << questions << endl;
        answer = cai_generate_answer(num1, num2, operatorSymbol);

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

int cai_operator(void)
{
    int r = random_between(0, 100);

    if (r < 25)
    {
        return '+';
    }
    else if (r < 50)
    {
        return '-';
    }
    else if (r < 75)
    {
        return '*';
    }
    else
    {
        return '/';
    }
}

int cai_generate_answer(int number1, int number2, int operatorSymbol)
{
    int answer;

    cout << "How much is " << number1 << " " << static_cast<char>(operatorSymbol) << " " << number2 << "? (CTRL+C quit) ";
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

int cai_number(int level)
{
    int maximum = pow(10, level);

    return random_between(0, maximum);
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