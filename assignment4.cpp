// // W.A.P. for String using atleast 5 operations of string class.
// #include <iostream>
// #include <string>
// #include <algorithm> // For std::transform
// #include <sstream>   // For std::stringstream

// using namespace std;

// int main() {

//     string originalString = "Hello, World! Welcome to C++ Programming.";

   
//     string upperCaseString = originalString;
//     transform(upperCaseString.begin(), upperCaseString.end(), upperCaseString.begin(), ::toupper);
//     cout << "Uppercase String: " << upperCaseString << endl;

//     size_t lengthOfString = originalString.length();
//     cout << "Length of String: " << lengthOfString << endl;

  
//     string replacedString = originalString;
//     size_t pos = replacedString.find("World");
//     if (pos != string::npos) {
//         replacedString.replace(pos, 5, "Universe");
//     }
//     cout << "Replaced String: " << replacedString << endl;

//     bool containsCpp = originalString.find("C++") != string::npos;
//     cout << "Contains 'C++': " << (containsCpp ? "Yes" : "No") << endl;

//     cout << "Words in the String:" << endl;
//     stringstream ss(originalString);
//     string word;
//     while (ss >> word) {
//         cout << word << endl;
//     }

//     return 0;
// }


// // W.A.P. for to display Array of 6 by 6 matrix
// #include <iostream>
// using namespace std;
// int main() {

//     int arr[6][6];
//     for (int i = 0; i < 6; i++) {
//         for (int j = 0; j < 6; j++) {
//             arr[i][j] = i * j;
//             cout << arr[i][j] << " ";
//             }

//             cout << endl;

//         }
//             return 0;

// }