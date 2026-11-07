#include <iostream>

//Напишете функция, която намира всички четирицифрени числа от интервала [m, n], 
//които след задраскване на цифрата на стотиците се делят на 11.
//m и n са естествени числа и m < n. Ако няма такива числа, изведете No such a number!.

unsigned removeHundreds(unsigned num)
{
	unsigned thousands = num / 1000;
	unsigned remaining = num % 100;
	return thousands * 100 + remaining;
}

bool isDivisibleWithoutHundreds(unsigned num, unsigned divisor)
{
	return removeHundreds(num) % divisor == 0;
}

void printDivisibles(unsigned lowerBound, unsigned upperBound)
{
	bool areDivisiblesPresent = false;
	for (int i = lowerBound; i <= upperBound; i++)
	{
		if (isDivisibleWithoutHundreds(i, 11))
		{
			areDivisiblesPresent = true;
			std::cout << i << " ";
		}
	}

	if(!areDivisiblesPresent)
		std::cout << "No such a number!";
}

int main()
{
	std::cout << "Enter interval numbers:\n";
  unsigned start, end;
  std::cin >> start >> end;

  printDivisibles(start,end);
}
