#include <iostream>

// Напишете функция, която приема 4 цели числа a, b, c, d и връща дали точките (a, b) и (c, d) лежат на една окръжност с център (0, 0).

unsigned square(unsigned x) {
    return x * x;
}

unsigned calculateRadius(int x1, int y1)
{
    return square(x1) + square(y1);
}

bool areOnTheSameCircle(int firstX, int firstY, int secondX, int secondY) {
    // Сравняваме квадратите на радиусите
    unsigned firstRadiusSq= calculateRadius(firstX, firstY);
    unsigned secondRadiusSq = calculateRadius(secondX, secondY);

    return firstRadiusSq == secondRadiusSq;
}

int main() {
    int a1, b1, a2, b2;
    std::cout << "Enter coordinates of the first point (a1 b1): ";
    std::cin >> a1 >> b1;
    std::cout << "Enter coordinates of the second point (a2 b2): ";
    std::cin >> a2 >> b2;

    if (areOnTheSameCircle(a1, b1, a2, b2)) {
        std::cout << "The points lie on the same circle centered at (0,0).\n";
    } else {
        std::cout << "The points do NOT lie on the same circle centered at (0,0).\n";
    }
}
