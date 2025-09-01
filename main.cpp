#include <iostream>
using namespace std;

int main()
{
    int num1, num2, res, choice;
    cout << "Calculator App" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "1. Add\n3. Division\nEnter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        res = num1 + num2;
        cout << "Add result: " << res << endl;
        break;
    case 3:
        res = num1 / num2;
        cout << "Divide result: " << res << endl;
        break;
    default:
        cout << "Invalid Choice" << endl;
    }
    return 0;
}
