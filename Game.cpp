#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator
    int randomNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    while (guess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            cout << "Too high! Try again.\n";
        }
        else if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "Congratulations! You guessed the correct number " << randomNumber << " in " << attempts << " attempts.\n";
        }
    }

    return 0;
}
