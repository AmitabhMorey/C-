#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));
    
    int numberToGuess = rand() % 100 + 1;  // Random number between 1 and 100
    int playerGuess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << endl;

    // Loop until the player guesses the correct number
    while (playerGuess != numberToGuess) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        attempts++;

        if (playerGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (playerGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number!" << endl;
            cout << "It took you " << attempts << " attempts to guess the number." << endl;
        }
    }

    return 0;
}
