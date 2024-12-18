// #include <iostream>  // For input and output

// int main() {
//     char operation;  // To store the operator (+, -, *, /)
//     double num1, num2;  // To store the two numbers

//     // Ask the user for input
//     std::cout << "Enter first number: ";
//     std::cin >> num1;

//     std::cout << "Enter an operator (+, -, *, /): ";
//     std::cin >> operation;

//     std::cout << "Enter second number: ";
//     std::cin >> num2;

//     // Perform the operation based on user input
//     switch (operation) {
//         case '+':
//             std::cout << "Result: " << num1 + num2 << std::endl;
//             break;
//         case '-':
//             std::cout << "Result: " << num1 - num2 << std::endl;
//             break;
//         case '*':
//             std::cout << "Result: " << num1 * num2 << std::endl;
//             break;
//         case '/':
//             if (num2 != 0) {
//                 std::cout << "Result: " << num1 / num2 << std::endl;
//             } else {
//                 std::cout << "Error: Division by zero is not allowed." << std::endl;
//             }
//             break;
//         default:
//             std::cout << "Error: Invalid operator." << std::endl;
//             break;
//     }

//     return 0;  // Indicate that the program ended successfully
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "enter the year: ";
//     cin >> a;

//     if(a % 4){
//         cout << "is leap year" << endl;
//         if(a % 100 == 0 && a % 400 == 0){
//             cout << "is a leap year" << endl;
//         }
//     }

//     else{
//         cout << "is not leap year" << endl;
//     }
// }

