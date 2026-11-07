#include <iostream>
#include <cmath>

//Напишете булева функция areCollinear(x1, y1, x2, y2, x3, y3), която проверява дали три точки в равнината лежат на една права.

const double EPSILON = 0.00000001;

double myAbs(double val) {
    if (val < 0) {
        return -val;
    }
    return val;
}

double findTwiceArea(double x1, double y1, double x2, double y2, double x3, double y3)
{
  return x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
}

bool areCollinear(double x1, double y1, double x2, double y2, double x3, double y3) {
    double areaTwice = findTwiceArea(x1,y1,x2,y2,x3,y3);
    return myAbs(areaTwice) < EPSILON;
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    std::cout << "Enter coordinates of the first point (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter coordinates of the second point (x2 y2): ";
    std::cin >> x2 >> y2;

    std::cout << "Enter coordinates of the third point (x3 y3): ";
    std::cin >> x3 >> y3;

    if (areCollinear(x1, y1, x2, y2, x3, y3)) {
        std::cout << "The points are collinear (lie on the same line).\n";
    } else {
        std::cout << "The points are NOT collinear.\n";
    }
}
