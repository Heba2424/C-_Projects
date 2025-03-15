#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2;
    char choice;

    cout << "Welcome to the Simple Calculator!\n";

    do {
        cout << "\nEnter first number: ";
        cin >> num1;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;
        cout << "Enter second number: ";
        cin >> num2;

        if (operation == '+') {
            cout << "Result: " << num1 + num2 << endl;
        }
        else if (operation == '-') {
            cout << "Result: " << num1 - num2 << endl;
        }
        else if (operation == '*') {
            cout << "Result: " << num1 * num2 << endl;
        }
        else if (operation == '/') {
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            }
            else {
                cout << "Error: Division by zero is not allowed.\n";
            }
        }
        else {
            cout << "Invalid operator!\n";
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the Simple Calculator!\n";
    return 0;
}
