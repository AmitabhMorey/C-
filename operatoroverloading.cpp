// #include <iostream>
// using namespace std;

// class demo
// {
//     public:
//     int num;
//     // constructor 
//     demo(int a)  

//     {
//         num = a;
//         display();
//     }
//     // operator overloading method
//     // return_type operator op(sign) () {}
//     demo operator ++()
    
//     {
//         num += 1;
//         return num;
//         display();
//     }

//     // display method
//     void display()
//     {
//         cout << "value of num is " << num << endl;
//     }
// };

// int main(){
//     // calling operator with object.
//     ++demo(10);
// }

// // Binary overloading
// #include <iostream>
// using namespace std;

// class number
// {
//     private:
//     int n;

//     public:
//     void get_n()

//     {
//         cout << "Enter the number ";
//         cin >> n;
//     }

//     void put_n()

//     {
//         cout << n << endl;
//     }

//     number operator + (number y)
//     {
//         number ans;
//         ans.n = n + y.n;
//         return ans;
//     }
// };

// int main()
// {
//     number O1, O2, O3;
//     O1.get_n();
//     O2.get_n();

//     O3 = O1 + O2;
//     O3 = O1.operator + (O2);

//     cout << "\n number 1 = ";
//     O1.put_n();
//     cout << "\n number 2 = ";
//     O2.put_n();

//     cout << "\n addition = ";
//     O3.put_n();
//     return 0;
// }