// // W.A.P. to check whether number is prime number or not
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (n > 1)
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 cout << n << " is not a prime number";
//                 return 0;
//                 }
//                 }
//                 cout << n << " is a prime number";
//                 return 0;
//                 }
//                 cout << n << " is not a prime number";
//                 return 0;
//                 }


// //  W.A.P. to check whether given number is amrstrong number or not
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, temp, sum = 0, rem;
//     cout << "Enter a number: ";
//     cin >> n;
//     temp = n;
//     while (n > 0)
//     {
//         rem = n % 10;
//         sum = sum + rem * rem * rem;
//         n = n / 10;
//         }

//         if (sum == temp)
//         {
//             cout << temp << " is an Armstrong number";
//             }

//             else
//             {
//                 cout << temp << " is not an Armstrong number";
//                 }
//                 return 0;
//                 }