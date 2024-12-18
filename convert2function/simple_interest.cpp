#include <iostream>

using namespace std;

// Function to calculate simple interest
double calculateSimpleInterest(double principal, double rate, double time) {
    double si = (principal * rate * time) / 100;
    return si;
}

int main() {
    double principal, rate, time, si;

    // Get input from user
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter interest rate (in %): ";
    cin >> rate;
    cout << "Enter time period (in years): ";
    cin >> time;

    // Calculate simple interest
    si = calculateSimpleInterest(principal, rate, time);

    // Display result
    cout << "The simple interest is: " << si << endl;

    return 0;
}