// // Q1) Display a single variable
// #include <iostream>

// int main() {

//     int myVariable = 42;
//     std::cout << "The value of myVariable is: " << myVariable << std::endl;

//     return 0;
// }

// // Q2) Swap two variables
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     int b = 10;
//     cout << "Before swapping: a = " << a << ", b = " << b <<
//     endl;
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     cout << "After swapping: a = " << a << ", b = " << b <<
//     endl;
//     return 0;
//     }  

// // Q3) Simple arithmatic operations (Addition, subtraction)
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     int b = 10;
//     cout << "Addition: " << a + b << endl;
//     cout << "Subtraction: " << a - b << endl;
//     return 0;
//     } 

// // Q4) Find sum of multiple variables
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     int b = 10;
//     int c = 15;
//     int sum = a + b + c;
//     cout << "Sum of a, b, c: " << sum << endl;
//     return 0;
//     }

// // Q5) Store and Display different data types
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     float b = 10.5;
//     char c = 'A';
//     bool d = true;
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;
//     cout << "c = " << c << endl;
//     cout << "d = " << d << endl;
//     return 0;
//     }  

// // Q6) Convert celsius to fahrenheit
// #include <iostream>
// using namespace std;
// int main() {
//     float celsius;
//     cout << "Enter temperature in celsius: ";
//     cin >> celsius;
//     float fahrenheit = (celsius * 9/5) + 32;
//     cout << celsius << " degree celsius is equal to " << fahrenheit << " degree fahrenheit" << endl;
//     return 0;
//     }

// // Q7) sum of two variables
// #include <iostream>
// using namespace std;
// int main() {
//     int a = 5;
//     int b = 10;
//     int sum = a + b;
//     cout << "Sum of a and b: " << sum << endl;
//     return 0;
//     } 

// // Q8) Store and display a string variable
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//     string name;
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Hello, " << name << endl;
//     return 0;
//     }  

// // Q9) Simple interest calculation
// #include <iostream>
// using namespace std;
// int main() {
//     float principal, rate, time, interest;
//     cout << "Enter principal: ";
//     cin >> principal;
//     cout << "Enter rate: ";
//     cin >> rate;
//     cout << "Enter time: ";
//     cin >> time;
//     interest = (principal * rate * time) / 100;
//     cout << "Simple interest: " << interest << endl;
//     return 0;
//     } 

// // Q10) Find remainder using Modulus
// #include <iostream>
// using namespace std;
// int main() {
//     int dividend, divisor, remainder;
//     cout << "Enter dividend: ";
//     cin >> dividend;
//     cout << "Enter divisor: ";
//     cin >> divisor;
//     remainder = dividend % divisor;
//     cout << "Remainder: " << remainder << endl;
//     return 0;
//     }

// // Q11) Perimeter of a Rectangle
// #include <iostream>
// using namespace std;
// int main() {
//     int length, width, perimeter;
//     cout << "Enter length: ";
//     cin >> length;
//     cout << "Enter width: ";
//     cin >> width;
//     perimeter = 2 * (length + width);
//     cout << "Perimeter: " << perimeter << endl;
//     return 0;
//     }

// // Q12) Division of two numbers
// #include <iostream>
// using namespace std;
// int main() {
//     int dividend, divisor, quotient, remainder;
//     cout << "Enter dividend: ";
//     cin >> dividend;
//     cout << "Enter divisor: ";
//     cin >> divisor;
//     if (divisor != 0) {
//         quotient = dividend / divisor;
//         remainder = dividend % divisor;
//         cout << "Quotient: " << quotient << endl;
//         cout << "Remainder: " << remainder << endl;
//         } 
        
//     else
//         cout << "Error: Division by zero is not allowed." << endl;
//         return 0;
//         }

// // Q13) Assign values of multiple variable
// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cout << "Enter value of a: ";
//     cin >> a;
//     cout << "Enter value of b: ";
//     cin >> b;
//     cout << "Enter value of c: ";
//     cin >> c;
//     cout << "Value of a: " << a << endl;
//     cout << "Value of b: " << b << endl;
//     cout << "Value of c: " << c << endl;
//     return 0;
//     }

// // Q14) check if a variable is positive or negative
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num > 0){cout << "The number is positive." << endl;}
//     else if (num < 0){cout << "The number is negative." << endl;}
//     else{cout << "The number is zero." << endl;}
//     return 0;
//     }

// // Make a project where the user clicks on the link and owner gets the information of the user who clicked on the link. This is a simple example of how to do it
// #include <iostream>
// using namespace std;

// int main() {
//     string name, email, link;
//     cout << "Enter your name: ";
//     cin >> name;
//     cout << "Enter your email: ";
//     cin >> email;
//     cout << "Enter the link: ";
//     cin >> link;
//     cout << "Name: " << name << endl;
//     cout << "Email: " << email << endl;
//     cout << "Link: " << link << endl;
//     return 0;
//     } 