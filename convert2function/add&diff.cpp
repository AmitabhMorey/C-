#include <iostream>

int main() {
    int num1, num2, sum, difference;

    // Input values for num1 and num2
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    // Perform addition
    sum = num1 + num2;

    // Perform subtraction
    difference = num1 - num2;

    // Display the results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;

    return 0;
}