// loopWhileconsoleApllication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void task2()
{
	int firstNumber, secondNumber;
	std::cout << "podaj pierwsz� liczb�\n";
	std::cin >> firstNumber;
	std::cout << "podaj drug� liczb�\n";
	std::cin >> secondNumber;

	int nwd;
	nwd = firstNumber;

	while (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
		nwd--;

	std::cout << "NWD jest r�wne " << nwd << "\n";
}
	int main()
	{
		setlocale(LC_CTYPE, "polish");
		task2();
	}

