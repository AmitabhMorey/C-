// // Q1) A simple program to check if a number is positive, negative, or zero
// #include <iostream>
// using namespace std;
// int main(){
//     int x; 
//     cout << "enter a number: ";
//     cin >> x; 
//     if (x > 0){
//         cout << "positive" << endl;
//     }

//     else if (x < 0){
//         cout << "negative" << endl;
//     }

//     else {
//         cout << "0" << endl;
//     }
// }

// // Q2) A program that checks if a number is even or odd.
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "enter a number: ";
//     cin >> a;

//     if(a % 2 == 0){
//         cout << "even" << endl;
//     }

//     else{
//         cout << "out" << endl;
//     } 
// }

// // Q3) A program that checks if a number is positive, negative, or zero.
// #include <iostream>
// using namespace std;
// int main(){
//     int d;
//     cout << "enter a number: ";
//     cin >> d;

//     if(d > 0){
//         cout << "positive" << endl;
//     }

//     else if(d < 0){
//         cout << "negative" << endl;
//     }

//     else{
//         cout << "0" << endl;
//     }
// }

// // Q4) A program that displays the name of the day based on the number entered by the user    (1 for Monday, 2 for Tuesday, etc.).
// #include <iostream>
// using namespace std;
// int main(){
//     int dayz;
//     cout << "enter a number: ";
//     cin >> dayz;

//     switch(dayz){
//         case 1:
//         cout << "Monday" << endl;
//         break;

//         case 2:
//         cout << "Tuesday" << endl;
//         break;

//         case 3:
//         cout << "Wednesday" << endl;
//         break;

//         case 4:
//         cout << "Thursday" << endl;
//         break;

//         case 5:
//         cout << "Friday" << endl;
//         break;

//         case 6:
//         cout << "Saturday" << endl;
//         break;

//         case 7:
//         cout << "Sunday" << endl;
//         break;

//         default:
//         cout << "invalid number!, please enter a number between 1 to 7";
//         break;

//     }
// }

// // Q5) A simple grading system using switch to select the grade based on marks.
// #include <iostream>
// using namespace std;

// int main() {
//     int marks;
    
//     // Ask the user for input marks
//     cout << "Enter the marks: ";
//     cin >> marks;
    
//     // Calculate the grade using switch
//     int gradeCategory = marks / 10;  // Calculate grade category based on marks
    
//     switch(gradeCategory) {
//         case 10:  // Marks 100
//         case 9:   // Marks 90-99
//             cout << "Grade: A+" << endl;
//             break;
//         case 8:   // Marks 80-89
//             cout << "Grade: A" << endl;
//             break;
//         case 7:   // Marks 70-79
//             cout << "Grade: B" << endl;
//             break;
//         case 6:   // Marks 60-69
//             cout << "Grade: C" << endl;
//             break;
//         case 5:   // Marks 50-59
//             cout << "Grade: D" << endl;
//             break;
//         default:   // Marks below 50
//             cout << "Grade: F" << endl;
//     }

//     return 0;
// }

// // Q6)  program that uses if and else statements to find the largest of three numbers
// #include <iostream>
// using namespace std;
// int main(){
//     int l, m, n;
//     cout << "enter 1st number: ";
//     cin >> l; 
//     cout << "enter 2nd number: ";
//     cin >> m;
//     cout << "enter 3rd number: ";
//     cin >> n;

//     if(l>m && l>n){
//         cout << "l is biggest";
//     }

//     else if(m>n && m>l){
//         cout << "m is biggest";
//     }

//     else{
//         cout << "n is biggest";
//     }
// }

// // Q7) A program to check whether a given year is a leap year.
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "enter the year: ";
//     cin >> a;

//     if(a % 4){
//         cout << "is leap year" << endl;
//     }

//     else if(a % 100 == 0 && a % 400 == 0){
//         cout << "is a leap year" << endl;
//     }

//     else{
//         cout << "is not leap year" << endl;
//     }
// }
