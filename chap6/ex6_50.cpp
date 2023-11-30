// ex6_50
// Pass-by-Value vs. Pass-by-Reference

#include <iostream>
using std::cout;
using std::endl;

int tripleByValue(int count);
void tripleByReference(int &count);

int main()
{
    int count = 5;

    cout << "Triple By Value" << endl;
    cout << "count: " << count << "\t3*count: " << tripleByValue(count) << endl;
    cout << "count after tripleByValue: " << count << endl;

    cout << "Triple By Reference" << endl;
    cout << "count: " << count << "\t3*count: ";
    tripleByReference(count);
    cout << count << endl;
    cout << "count after tripleByReference: " << count << endl;
}

int tripleByValue(int count)
{
    return 3 * count;
}

void tripleByReference(int &count)
{
    count = count * 3;
}