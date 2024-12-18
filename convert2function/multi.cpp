#include <iostream>
using namespace std;

// Function to multiply two numbers
int multiply(int a, int b) {
    return a * b; // Return the product of a and b
}

int main() {
    int num1, num2;

    // Input values for num1 and num2
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Call the multiply function and store the result
    int product = multiply(num1, num2);

    // Display the result
    cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;

    return 0;
}