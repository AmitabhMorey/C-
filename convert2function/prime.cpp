#include <iostream>
#include <vector>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find all prime numbers in a given range
std::vector<int> findPrimesInRange(int start, int end) {
    std::vector<int> primes;
    for (int num = start; num <= end; ++num) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
    }
    return primes;
}

int main() {
    int startRange, endRange;

    // Input range from user
    std::cout << "Enter the start of the range: ";
    std::cin >> startRange;
    std::cout << "Enter the end of the range: ";
    std::cin >> endRange;

    // Find and display prime numbers in the specified range
    std::vector<int> primeNumbers = findPrimesInRange(startRange, endRange);
    std::cout << "Prime numbers between " << startRange << " and " << endRange << ": ";
    for (int prime : primeNumbers) {
        std::cout << prime << " ";
    }
    std::cout << std::endl;

    return 0;
}