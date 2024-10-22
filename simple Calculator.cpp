#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2, result;

    cout << "Enter an operator: ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "The result of " << num1 << " + " << num2 << " is: " << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            cout << "The result of " << num1 << " - " << num2 << " is: " << result << "\n";
            break;
        case '*':
            result = num1 * num2;
            cout << "The result of " << num1 << " * " << num2 << " is: " << result << "\n";
            break;
        case '/':
            result = num1 / num2;
            cout << "The result of " << num1 << " / " << num2 << " is: " << result << "\n";
            break;
        default:
            cout << "Invalid operator!\n";
            break;
    }

    return 0;
}