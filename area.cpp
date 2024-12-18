// #include <iostream>
// #include <cmath>

// using namespace std;

// // Base class Shape
// class Shape {
// public:
//     virtual double area() = 0; // Pure virtual function for area
// };

// // Derived class Circle
// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     double area() { // Removed override
//         return M_PI * radius * radius; // Area of circle = πr²
//     }
// };

// // Derived class Square
// class Square : public Shape {
// private:
//     double side;

// public:
//     Square(double s) : side(s) {}

//     double area() { // Removed override
//         return side * side; // Area of square = s²
//     }
// };

// // Derived class Rectangle
// class Rectangle : public Shape {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w) : length(l), width(w) {}

//     double area() { // Removed override
//         return length * width; // Area of rectangle = l × w
//     }
// };

// // Class to manage the shapes and calculate their areas
// class AreaCalculator {
// private:
//     Shape* shape; // Pointer to base class Shape

// public:
//     void setShape(Shape* s) {
//         shape = s;
//     }

//     void calculateArea() {
//         if (shape) {
//             cout << "Area: " << shape->area() << endl;
//         } else {
//             cout << "No shape set!" << endl;
//         }
//     }
// };

// int main() {
//     AreaCalculator calculator;

//     int choice;
    
//     cout << "Select a shape to calculate area:\n";
//     cout << "1. Circle\n";
//     cout << "2. Square\n";
//     cout << "3. Rectangle\n";
    
//     cout << "Enter your choice (1-3): ";
//     cin >> choice;

//     if (choice == 1) { // Circle
//         double radius;
//         cout << "Enter the radius of the circle: ";
//         cin >> radius;
//         Circle circle(radius);
//         calculator.setShape(&circle);
        
//     } 
    
//     else if (choice == 2) { // Square
//         double side;
//         cout << "Enter the side length of the square: ";
//         cin >> side;
//         Square square(side);
//         calculator.setShape(&square);
        
//     } 
    
//     else if (choice == 3) { // Rectangle
//         double length, width;
//         cout << "Enter the length and width of the rectangle: ";
//         cin >> length >> width;
//         Rectangle rectangle(length, width);
//         calculator.setShape(&rectangle);
        
//     } 
    
//     else {
//         cout << "Invalid choice!" << endl;
//         return 1; // Exit if invalid choice
//     }

//     calculator.calculateArea(); // Calculate and display the area

//     return 0;
// }

