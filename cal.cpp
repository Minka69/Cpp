#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;


    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
    }

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
