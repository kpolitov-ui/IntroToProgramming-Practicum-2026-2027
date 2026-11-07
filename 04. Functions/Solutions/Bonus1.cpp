#include <iostream>
#include <cmath>

//Напишете функция, която приема три естествени числа a, b и k и връща броя на числата в интервала [a, b], 
//които имат точно k различни прости делителя.

void divideNum(int& n, int div) {
    while (n % div == 0) {
        n /= div;
    }
}

unsigned countPrimeDivisors(int n) {
    unsigned count = 0;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            count++;
            divideNum(n, i);
        }
    }

    return count;
}

unsigned countNumbersWithKPrimeDivisors(int a, int b, int k) {
    unsigned total = 0;
    for (int i = a; i <= b; i++) {
        if (countPrimeDivisors(i) == k) {
            total++;
        }
    }
    return total;
}

int main() {
    int a, b, k;
    std::cout << "Enter a, b, k: ";
    std::cin >> a >> b >> k;

    unsigned result = countNumbersWithKPrimeDivisors(a, b, k);
    std::cout << "Number of integers in [" << a << ", " << b << "] with exactly "
        << k << " distinct prime divisors: " << result << "\n";
}
