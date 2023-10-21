// ex5_14
// Calculating Total Sales

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    double retail_price_1 = 2.98;
    double retail_price_2 = 4.50;
    double retail_price_3 = 9.98;
    double retail_price_4 = 4.49;
    double retail_price_5 = 6.87;
    double retail_total_value = 0.;

    int product_number, quantity;

    cout << "Product Number (1 - 5, -1 to end): ";
    cin >> product_number;

    while (product_number != -1)
    {
        cout << "Quantity: ";
        cin >> quantity;

        switch (product_number)
        {
        case 1:
            retail_total_value += retail_price_1 * quantity;
            break;
        case 2:
            retail_total_value += retail_price_2 * quantity;
            break;
        case 3:
            retail_total_value += retail_price_3 * quantity;
            break;
        case 4:
            retail_total_value += retail_price_4 * quantity;
            break;
        case 5:
            retail_total_value += retail_price_5 * quantity;
            break;
        default:
            cout << "Invalid Product Number" << endl;
            break;
        }

        cout << "Product Number (1 - 5, -1 to end): ";
        cin >> product_number;
    }

    cout << "Retail Total Value: " << retail_total_value << endl;
}