#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; // Initial balance
    int choice;
    double amount;

    cout << "Welcome to the Simple ATM Simulator!\n";

    do {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Your current balance is: $" << balance << "\n";
        }
        else if (choice == 2) {
            cout << "Enter amount to deposit: $";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "$" << amount << " deposited successfully.\n";
            }
            else {
                cout << "Invalid deposit amount.\n";
            }
        }
        else if (choice == 3) {
            cout << "Enter amount to withdraw: $";
            cin >> amount;
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "$" << amount << " withdrawn successfully.\n";
            }
            else {
                cout << "Invalid withdrawal amount or insufficient funds.\n";
            }
        }
        else if (choice == 4) {
            cout << "Thank you for using the ATM. Goodbye!\n";
        }
        else {
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
