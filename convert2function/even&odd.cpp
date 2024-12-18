#include <iostream>
using namespace std;

// Function declaration
void checkEvenOdd(int number);

int main() {
    int num;

    // User input
    cout << "Enter an integer: ";
    cin >> num;

    // Call the function to check if the number is even or odd
    checkEvenOdd(num);

    return 0;
}

// Function definition
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
}