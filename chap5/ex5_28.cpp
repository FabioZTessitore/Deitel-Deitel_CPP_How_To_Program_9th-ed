// ex5_28
// "The Twelve Days of Christmas" Song

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "The Twelve Days of Christmas" << endl
         << endl;

    for (int day = 1; day <= 12; ++day)
    {
        cout << "On the ";

        switch (day)
        {
        case 1:
            cout << "first";
            break;
        case 2:
            cout << "second";
            break;
        case 3:
            cout << "third";
            break;
        case 4:
            cout << "fourth";
            break;
        case 5:
            cout << "fifth";
            break;
        case 6:
            cout << "sixth";
            break;
        case 7:
            cout << "seventh";
            break;
        case 8:
            cout << "eighth";
            break;
        case 9:
            cout << "ninth";
            break;
        case 10:
            cout << "tenth";
            break;
        case 11:
            cout << "eleventh";
            break;
        case 12:
            cout << "twelfth";
            break;
        default:
            break;
        }

        cout << " day of Christmas my true love sent to me" << endl;

        switch (day)
        {
        case 12:
            cout << "Twelve drummers drumming" << endl
                 << "And ";
        case 11:
            cout << "Eleven pipers piping" << endl
                 << "And ";
        case 10:
            cout << "Ten lords a-leaping" << endl
                 << "And ";
        case 9:
            cout << "Nine ladies dancing" << endl
                 << "And ";
        case 8:
            cout << "Eight maids a-milking" << endl
                 << "And ";
        case 7:
            cout << "Seven swans a-swimming" << endl
                 << "And ";
        case 6:
            cout << "Six geese a-laying" << endl
                 << "And ";
        case 5:
            cout << "Five gold rings" << endl
                 << "And ";
        case 4:
            cout << "Four calling birds" << endl
                 << "And ";
        case 3:
            cout << "Three French hens" << endl
                 << "And ";
        case 2:
            cout << "Two turtle doves" << endl
                 << "And ";
        case 1:
            cout << "a partridge in a pear tree" << endl
                 << endl;
            break;

        default:
            break;
        }
    }
}