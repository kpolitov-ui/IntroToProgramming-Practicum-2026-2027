// Kosta Politov - Seminar 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//TASK 1:
int numberOfDigits(int number) {
	int counter = 0;

	while (number != 0) {
		counter++;
		number /= 10;
	}

	return counter;
}

//TASK 2:
int square(int x) {
	x = x * x;
	return x;
}

int sumOfSquares(int n) {
	int sumOfSquares = 0;

	for (int i = 1; i <= n; i++) {
		sumOfSquares += square(i);
	}

	return sumOfSquares;
}

//TASK 3:
bool areCoordinatesOnTheSameCircle(int a, int b, int c, int d) {
	int radius1 = sqrt(a * a + b * b);
	int radius2 = sqrt(c * c + d * d);

	if (radius1 == radius2) {
		return 1;
	}

	return 0;
}

//ТАСК 4:
double getLenghtFromCoordinates(int x1, int y1, int x2, int y2) {
	double lenght = sqrt(square(x2 - x1) + square(y2 - y1));
	return lenght;
}

double parameterOfTriangleByCoordinates(int a, int b, int c, int d, int e, int f) {
	//A (a, b); B (c, d); C (e, f)
	//side1 = AB; side2 = BC; side3 = CA;
	double side1 = getLenghtFromCoordinates(a, b, c, d);
	double side2 = getLenghtFromCoordinates(c, d, e, f);
	double side3 = getLenghtFromCoordinates(e, f, a, b);

	return side1 + side2 + side3;
}

int main()
{
	
}

