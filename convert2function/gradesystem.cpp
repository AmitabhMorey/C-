#include <iostream>
#include <string>

using namespace std;

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

    cout << "Enter marks: ";
    cin >> marks;

    grade = calculateGrade(marks);

    cout << "The grade is: " << grade << endl;

    return 0;
}