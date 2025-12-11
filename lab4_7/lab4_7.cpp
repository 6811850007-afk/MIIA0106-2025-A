#include <iostream>
#include <cmath> // Required for the sqrt function

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    int limit = static_cast<int>(std::sqrt(n));
    for (int i = 5; i <= limit; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    std::cout << "--- Prime Number Checker ---" << std::endl;
    int num1 = 17;
    int num2 = 15;
    int num3 = 101;
    int num4 = 1;
    int num5 = 2;
    std::cout << num1 << (isPrime(num1) ? " is " : " is NOT ") << "a prime number." << std::endl;
    std::cout << num2 << (isPrime(num2) ? " is " : " is NOT ") << "a prime number." << std::endl;
    std::cout << num3 << (isPrime(num3) ? " is " : " is NOT ") << "a prime number." << std::endl;
    std::cout << num4 << (isPrime(num4) ? " is " : " is NOT ") << "a prime number." << std::endl;
    std::cout << num5 << (isPrime(num5) ? " is " : " is NOT ") << "a prime number." << std::endl;
    return 0;
}



