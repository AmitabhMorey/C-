// #include <iostream>
// using namespace std;

// int sum(int k){
//     if (k < 0){
//         return k + sum(k - 1);
//     }else{
//         return 0;
//     }
// }

// int main(){
//     int result = sum(10);
//     cout << result;
//     return 0;
// }

// // Q1) Factorial
// #include <iostream>

// using namespace std;

// unsigned long long factorialIterative(int n) {
//     unsigned long long result = 1;
//     for (int i = 2; i <= n; ++i) {
//         result *= i;
//     }
//     return result;
// }

// // Recursive function to calculate factorial
// unsigned long long factorialRecursive(int n) {
//     if (n <= 1) {
//         return 1; // Base case: 0! = 1 and 1! = 1
//     }
//     return n * factorialRecursive(n - 1); // Recursive case
// }

// int main() {
//     int number;

//     cout << "Enter a non-negative integer: ";
//     cin >> number;

//     if (number < 0) {
//         cout << "Factorial is not defined for negative numbers." << endl;
//         return 1;
//     }

//     // Calculate factorial using iterative method
//     unsigned long long iterativeResult = factorialIterative(number);
//     cout << "Factorial of " << number << " (iterative): " << iterativeResult << endl;

//     // Calculate factorial using recursive method
//     unsigned long long recursiveResult = factorialRecursive(number);
//     cout << "Factorial of " << number << " (recursive): " << recursiveResult << endl;

//     return 0;
// }

// // Q2) Palindrome
// #include <iostream>
// #include <string>
// #include <cctype> // For std::tolower

// using namespace std;

// // Recursive function to check if a string is a palindrome
// bool isPalindromeRecursive(const string& str, int left, int right) {
//     // Base case: if left index is greater than or equal to right
//     if (left >= right) {
//         return true; // It's a palindrome
//     }

//     // Ignore non-alphanumeric characters
//     while (left < right && !isalnum(str[left])) {
//         left++;
//     }
//     while (left < right && !isalnum(str[right])) {
//         right--;
//     }

//     // Compare characters (case insensitive)
//     if (tolower(str[left]) != tolower(str[right])) {
//         return false; // Not a palindrome
//     }

//     // Recursive call to check the next pair of characters
//     return isPalindromeRecursive(str, left + 1, right - 1);
// }

// int main() {
//     string input;

//     cout << "Enter a string: ";
//     getline(cin, input); // Read entire line including spaces

//     // Call the recursive function starting from the first and last indices
//     if (isPalindromeRecursive(input, 0, input.length() - 1)) {
//         cout << "\"" << input << "\" is a palindrome." << endl;
//     } else {
//         cout << "\"" << input << "\" is not a palindrome." << endl;
//     }

//     return 0;
// }

// // Q3) Armstrong
// #include <iostream>
// #include <cmath>

// using namespace std;

// // Function to count digits recursively
// int countDigits(int num) {
//     if (num == 0) {
//         return 0; // Base case: no digits left
//     }
//     return 1 + countDigits(num / 10); // Count this digit and recurse
// }

// // Recursive function to calculate the sum of digits raised to the power of 'power'
// int armstrongSum(int num, int power) {
//     if (num == 0) {
//         return 0; // Base case: no digits left
//     }
    
//     int digit = num % 10; // Get last digit
//     return pow(digit, power) + armstrongSum(num / 10, power); // Sum this digit's power and recurse
// }

// // Function to check if a number is an Armstrong number (recursive)
// bool isArmstrongRecursive(int num) {
//     int digits = countDigits(num); // Count total digits
//     return armstrongSum(num, digits) == num; // Compare sum with original number
// }

// int main() {
//     int number;

//     cout << "Enter a number: ";
//     cin >> number;

//     if (isArmstrongRecursive(number)) {
//         cout << number << " is an Armstrong number." << endl;
//     } else {
//         cout << number << " is not an Armstrong number." << endl;
//     }

//     return 0;
// }

// // Q4) Reverse
// #include <iostream>

// using namespace std;

// int reverseNumberRecursive(int num, int reversedNum = 0) {
   
//     if (num == 0) {
//         return reversedNum; 
//     }

//     int digit = num % 10; 
//     reversedNum = reversedNum * 10 + digit; 

//     return reverseNumberRecursive(num / 10, reversedNum);
// }

// int main() {
//     int number;

//     cout << "Enter an integer: ";
//     cin >> number;

//     int reversedRecursive = reverseNumberRecursive(number);
//     cout << "Reversed number (recursive): " << reversedRecursive << endl;

//     return 0;
// }

// // Q5)
// #include <iostream>

// using namespace std;

// int fibonacciRecursive(int n) {
//     if (n <= 0) {
//         return 0; // Base case: F(0) = 0
//     } else if (n == 1) {
//         return 1; // Base case: F(1) = 1
//     } else {
//         return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2); // Recursive case
//     }
// }

// void printFibonacciSeries(int n) {
//     cout << "Fibonacci Series (Recursive): ";
//     for (int i = 0; i < n; ++i) {
//         cout << fibonacciRecursive(i) << " "; 
//     }
//     cout << endl;
// }

// int main() {
//     int n;

//     cout << "Enter the number of terms in the Fibonacci series: ";
//     cin >> n;

//     printFibonacciSeries(n); 

//     return 0;
// }

