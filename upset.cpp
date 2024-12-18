// #include <iostream>

// void callByValue(int num) {
//     num += 10; 
//     std::cout << "Inside callByValue: " << num << std::endl;
// }

// void callByReference(int &num) {
//     num += 10; 
//     std::cout << "Inside callByReference: " << num << std::endl;
// }

// int main() {
//     int value = 5;

//     std::cout << "Original value: " << value << std::endl;

//     callByValue(value);
//     std::cout << "After callByValue: " << value << std::endl;
// \
//     callByReference(value);
//     std::cout << "After callByReference: " << value << std::endl; 

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class demo
// {
//     public:
//     void addition(int a, int b)
//     {
//         int c = a + b;
//         cout << "addition is " << c << endl;
//     }
//     void addition(int a, int b, int c)
//     {
//         int z = a + b + c;
//         cout << "addition is " << z;
//     }
    
// };

// int main()
// {
//     demo d;
//     d.addition(10, 20);
//     d.addition(10, 20, 30);
// }

// #include <iostream>
// using namespace std;

// class base
// {
//     public:
//     void display()
//     {
//         cout << "Base clase" << endl;
//     }
// };

// class derived:public base
// {
//     public:
//     void display()
//     {
//         cout << "Derived class" << endl;
//     }
// };

// int main()
// {
//     derived obj;
//     obj.display();
//     obj.base::display();
// }

// #include <iostream>
// using namespace std;

// class base
// {
//     public:
//     void display()
//     {
//         cout << "Base clase" << endl;
//     }
// };

// class derived:public base
// {
//     public:
//     void display()
//     {
//         cout << "Derived class" << endl;
//     }
// };

// int main()
// {
//     base *ptr;
//     derived obj;
//     ptr= &obj;
// }

// #include <iostream>
// using namespace std;

// class base {
// public:
//     inline void displayNum(int num) {
//         cout << num << endl;
//     }

//     // New method to add two numbers and display the result
//     void addAndDisplay(int a, int b) {
//         int sum = a + b;
//         displayNum(sum); // Call the displayNum method to show the result
//     }
// };

// int main() {
//     base obj;
//     int num1 = 5;
//     int num2 = 10;

//     // Call the addAndDisplay method
//     obj.addAndDisplay(num1, num2);

//     return 0;
// }