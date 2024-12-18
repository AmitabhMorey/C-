#include <iostream>
#include <cmath> // For M_PI constant
using namespace std;

// Function declaration
double calculateAreaOfCircle(double radius);

int main() {
    double radius;

    // User input
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Call the function to calculate the area
    double area = calculateAreaOfCircle(radius);

    // Output the result
    cout << "The area of the circle with radius " << radius << " is " << area << "." << endl;

    return 0;
}

// Function definition
double calculateAreaOfCircle(double radius) {
    return M_PI * radius * radius; // Area = π * r^2
}