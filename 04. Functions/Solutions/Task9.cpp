#include <iostream>

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

void calculateSumOfFactorials(long long n, long long& sum) {
    sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
}

bool isStrong(long long n) {
    if (n <= 0) {
        return false;
    }

    long long sumOfFactorials;
    calculateSumOfFactorials(n, sumOfFactorials);

    return sumOfFactorials == n;
}

int main() {
    long long number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    if (isStrong(number)) {
        std::cout << number << " is a STRONG number.\n";
    } else {
        std::cout << number << " is NOT a strong number.\n";
    }
}
