#include <iostream>

// Function to swap two variables
void swap(int &a, int &b) {
    int temp = a; 
    a = b;        
    b = temp;    
}

int main() {
    int x, y;

    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    swap(x, y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}