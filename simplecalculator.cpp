// Create a Simple calculator
// Purpose: This program will create a simple calculator that can perform addition, subtraction, multiplication, and division
#include <iostream>
using namespace std;

int main() {    
    int num1, num2, choice; // Added semicolon
    cout << "Simple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice; // Added semicolon

    switch (choice) {   
        case 1: 
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid choice. Please choose a number between 1 and 4." << endl; // Added semicolon
    }
    
    return 0;
}