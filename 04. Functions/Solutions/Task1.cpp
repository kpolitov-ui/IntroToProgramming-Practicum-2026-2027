#include <iostream>

//Напишете функция, която приема цяло число и връща броя на цифрите му.

unsigned countDigits(int number)
{
	unsigned cnt = 0;

	while (number > 0)
	{
		number /= 10;
		cnt++;
	}
  
	return cnt;
}

int main()
{
	std::cout << "Enter natural number:\n";
	int number;
	std::cin >> number;

	std::cout << "The number " << number << " has " << countDigits(number) << " digits.\n";
}
