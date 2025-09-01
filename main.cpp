#include <iostream>
using namespace std;

int main()
{
    int num1, num2, res, choice;
    cout << "Calculator App" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "1. Add\n2. Multiply\nEnter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        res = num1 + num2;
        cout << "Add result: " << res << endl;
        break;
    case 2:
        res = num1 * num2;
        cout << "Multiply result: " << res << endl;
        break;
    default:
        cout << "Invalid Choice" << endl;
    }
    return 0;
}
