// LoopDoWhileConsole_Apllication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczb� doodatni�:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczb� doodatni�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczb� doodatni�:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczb� doodatni�:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczb� doodatni�:\n";
					std::cin >> numberFromUser;
					//wklejamy ca�ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}


//Napisz program, kt�ry ma pobra� od u�ytkownika liczb� dodatni�. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.

void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "podaj liczb� dodatni�:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "liczba pobrana od u�ytkownika " << numberFromUser << "\n";
}


int main()
{
	//task1();
	task2();
}


