#include <iostream>
using namespace std;

// Function declaration
int reverseNumber(int number);

int main() {
    int num;

    // User input
    cout << "Enter an integer: ";
    cin >> num;

    // Call the function to reverse the number
    int reversedNum = reverseNumber(num);

    // Output the result
    cout << "The reversed number is: " << reversedNum << endl;

    return 0;
}

// Function definition
int reverseNumber(int number) {
    int reversed = 0;

    while (number != 0) {
        int digit = number % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append it to the reversed number
        number /= 10; // Remove the last digit from the original number
    }

    return reversed;
}