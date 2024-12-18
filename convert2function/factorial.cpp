#include <iostream>
#include <string>

using namespace std;

// Function to calculate grade
char calculateGrade(int marks) {
    if (marks >= 90) {
        return 'A';
    } else if (marks >= 80) {
        return 'B';
    } else if (marks >= 70) {
        return 'C';
    } else if (marks >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int marks;
    char grade;

    // Get input from user
    cout << "Enter marks: ";
    cin >> marks;

    // Calculate grade
    grade = calculateGrade(marks);

    // Display result
    cout << "The grade is: " << grade << endl;

    return 0;
}