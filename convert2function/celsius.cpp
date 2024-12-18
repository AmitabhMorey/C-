#include <iostream>
using namespace std;

// Function declaration
double fahrenheitToCelsius(double fahrenheit);

int main() {
    double fahrenheit;

    // User input
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Call the function to convert to Celsius
    double celsius = fahrenheitToCelsius(fahrenheit);

    // Output the result
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl;

    return 0;
}

// Function definition
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}