#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password, inputUsername, inputPassword;
    int attempts = 3;

    // User Registration
    cout << "Welcome! Please register your account.\n";
    cout << "Set a username: ";
    cin >> username;
    cout << "Set a password: ";
    cin >> password;

    cout << "\nRegistration successful! Now, log in.\n";

    // User Login
    while (attempts > 0) {
        cout << "\nEnter username: ";
        cin >> inputUsername;
        cout << "Enter password: ";
        cin >> inputPassword;

        if (inputUsername == username && inputPassword == password) {
            cout << "Login successful! Welcome, " << username << "!\n";
            return 0;
        }
        else {
            attempts--;
            cout << "Incorrect username or password. Attempts left: " << attempts << "\n";
        }
    }

    cout << "Too many failed attempts. Access denied.\n";
    return 0;
}
