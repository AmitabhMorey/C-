// program based on conditional statements
// 1. If-else statement
// 2. User Input
// Calculate grade:
// 80-90: A+
// 70-80: A
// 60-70: B
// 35-50: C
// 0-35: Fail
#include <iostream>
using namespace std;

int main() {
    int score; // Added semicolon to declare the variable
    cout << "Enter your score: ";
    cin >> score; // Added semicolon to complete the statement

    if (score >= 80 && score <= 90) {
        cout << "Grade: A+" << endl; // Added endl for better output formatting
    } 
    else if (score >= 70 && score < 80) {
        cout << "Grade: A" << endl; // Added endl for better output formatting
    }
    else if (score >= 60 && score < 70) {
        cout << "Grade: B" << endl; // Added endl for better output formatting
    }
    else if (score >= 35 && score < 60) {
        cout << "Grade: C" << endl; // Added endl for better output formatting
    }
    else {
        cout << "Grade: Fail" << endl; // Added endl for better output formatting
    }

    return 0; // Correctly placed return statement
}
