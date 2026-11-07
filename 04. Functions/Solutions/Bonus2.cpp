#include <iostream>

//Дадено е цяло число N (0 ≤ N ≤ 999 999). Напишете програма, която отпечатва числото словом на български език.

void printDigit(int n) {
    switch (n) {
        case 0: std::cout << "zero"; break;
        case 1: std::cout << "one"; break;
        case 2: std::cout << "two"; break;
        case 3: std::cout << "three"; break;
        case 4: std::cout << "four"; break;
        case 5: std::cout << "five"; break;
        case 6: std::cout << "six"; break;
        case 7: std::cout << "seven"; break;
        case 8: std::cout << "eight"; break;
        case 9: std::cout << "nine"; break;
    }
}

void printTeens(int n) {
    switch (n) {
        case 10: std::cout << "ten"; break;
        case 11: std::cout << "eleven"; break;
        case 12: std::cout << "twelve"; break;
        case 13: std::cout << "thirteen"; break;
        case 14: std::cout << "fourteen"; break;
        case 15: std::cout << "fifteen"; break;
        case 16: std::cout << "sixteen"; break;
        case 17: std::cout << "seventeen"; break;
        case 18: std::cout << "eighteen"; break;
        case 19: std::cout << "nineteen"; break;
    }
}

void printTens(int n) {
    switch (n) {
        case 2: std::cout << "twenty"; break;
        case 3: std::cout << "thirty"; break;
        case 4: std::cout << "forty"; break;
        case 5: std::cout << "fifty"; break;
        case 6: std::cout << "sixty"; break;
        case 7: std::cout << "seventy"; break;
        case 8: std::cout << "eighty"; break;
        case 9: std::cout << "ninety"; break;
    }
}

void printLessThanThousand(int n) {
    if (n == 0) return;

    int hundreds = n / 100;
    int remainder = n % 100;

    if (hundreds > 0) {
        printDigit(hundreds);
        std::cout << " hundred";
        if (remainder > 0) {
            std::cout << " and ";
        }
    }

    if (remainder >= 10 && remainder <= 19) {
        printTeens(remainder);
    } else {
        int tens = remainder / 10;
        int units = remainder % 10;

        if (tens > 0) {
            printTens(tens);
            if (units > 0) {
                std::cout << " ";
            }
        }

        if (units > 0) {
            printDigit(units);
        }
    }
}

void printNumberInWords(int n) {
    if (n == 0) {
        std::cout << "zero\n";
        return;
    }

    int thousands = n / 1000;
    int unitsPart = n % 1000;

    if (thousands > 0) {
        printLessThanThousand(thousands);
        std::cout << " thousand";

        if (unitsPart > 0) {
            if (unitsPart < 100) {
                std::cout << " and ";
            } else {
                std::cout << " ";
            }
        }
    }

    if (unitsPart > 0) {
        printLessThanThousand(unitsPart);
    }

    std::cout << "\n";
}

int main() {
    int n;
    std::cin >> n;

    if (n < 0 || n > 999999) {
        std::cout << "Invalid number!\n";
        return 1;
    }

    printNumberInWords(n);
}
