

#include <iostream>

/*
operatorzy warunkowe:
> - wi�ksze
< - mniejsze
>= - wi�ksze b�d� r�wne
<= - mniejsze b�d� r�wne
== - r�wne
!= - r�ne


*/
//napsiz program,kt�ry wy�wietli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number > 0)
			std::cout << "liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "liczba jest ujemna\n";

	if (number == 0)
		std::cout << "liczba jest r�wna zero\n";
	
	std::cout << "kolejna instrukcja\n";
}

//napisz program, kt�ry wy�wietli czy liczba jest parzysta czy nie parzysta
void task2()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;
	
	int rest = number % 2;
	if (rest == 0)
		std::cout << "liczba jest parzysta\n";
	if (rest != 0) // rest == 1
		std::cout << "liczba jest nieparzysta\n";

}









int main()
{
	//task1();
	task2();

}




