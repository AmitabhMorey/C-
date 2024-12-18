// // W.A.P to calculate factorial of given number.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,fact=1;
//     cout<<"Enter the number to calculate factorial: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//         }
//         cout<<"Factorial of "<<n<<" is: "<<fact;
//         return 0;
//         }

// // W.A.P to check whether the given number is prime or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number to check whether it is prime or not: ";
//     cin>>n;
//     int i;
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<n<<" is not a prime number.";
//             return 0;
//             }
//             }
//             cout<<n<<" is a prime number.";
//             return 0;
//             }

// // W.A.P to display reverse number of given number.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,rev=0;
//     cout<<"Enter the number to display reverse number: ";
//     cin>>n;
//     while(n!=0)
//     {
//         rev=rev*10+n%10;
//         n=n/10;
//         }
//         cout<<"Reverse of "<<n<<" is: "<<rev;
//         return 0;
//         }

// // W.A.P to calculate sum of given number.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0;
//     cout<<"Enter the number to calculate sum: ";
//     cin>>n;
//     while(n!=0)
//     {
//         sum=sum+n%10;
//         n=n/10;
//         }
//         cout<<"Sum of the number is: "<<sum;
//         return 0;
//         }

// // W.A.P to check whether the given number is armstrong number or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,armstrong=0;
//     cout<<"Enter the number to check armstrong number: ";
//     cin>>n;
//     int temp=n;
//     int sum=0;
//     while(n!=0)
//     {
//         int r=n%10;
//         sum=sum+r*r*r;
//         n=n/10;
//         }
//         if(sum==temp)
//         {
//             cout<<temp<<" is an armstrong number.";
//             }
//             else
//             {
//                 cout<<temp<<" is not an armstrong number.";
//                 }
//                 return 0;
//                 }

// // W.A.P to display * in below format.
// // *
// // * * *
// // * * * * *
// // * * * * * * *
// #include <iostream>
// using namespace std;

// int main() {
//     int rows = 4; // Number of rows in the pattern
//     for (int i = 1; i <= rows; i++) {
//         // Print stars for the current row
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             cout << "* ";
//         }
//         cout << endl; // Move to the next line after printing the row
//     }
//     return 0;
// }