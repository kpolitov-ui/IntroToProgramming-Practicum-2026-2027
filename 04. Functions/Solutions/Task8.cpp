#include <iostream>

//Напишете функция mixNums, която приема две числа и връща ново число, 
//в което се редуват цифра от първото и цифра от второто, като се започва от последните цифри.
//Когато едното число свърши, се добавят оставащите цифри на другото.

void addToResult(short digit, long long& result)
{
    result = (result * 10) + digit;
}

long long mixNums(long long a, long long b) {
    long long result = 0;

    while (a > 0 || b > 0) {
        if (a > 0) {
            addToResult(a % 10, result);
            a /= 10;
        }
        if (b > 0) {
            addToResult(b % 10, result);
            b /= 10;
        }
    }

    return result;
}

int main() {
    long long a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Mixed number: " << mixNums(a, b) << "\n";
}
