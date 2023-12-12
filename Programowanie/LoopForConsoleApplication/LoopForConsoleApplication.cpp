// LoopForConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*
 * Program obliczaj�cy sum� liczb od 1 do 100
 * Program sprawdzaj�cy czy podana liczba jest liczb� doskona�� (czyli tak�, kt�rej suma dzielnik�w (z wy��czeniem samej siebie) jest r�wna danej liczbie, np. 6 jest liczb� doskona��, poniewa� 1 + 2 + 3 = 6).
 * Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
 * Program obliczaj�cy n!.
 * Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
 * Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
 * Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
 * Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
 * Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu (ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
 * Program, k�ry wy�wietli poni�sze cztery zwory:
	 ****       54321        121212        122333
	 ***        65432        212121        223334444
	 **         76543        121212        333444455555
	 *          87654        212121        444455555666666
 * Oblicz sum� szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Je�eli si� nie pomylisz, to dla odpowiednio du�ej warto�ci n po przemno�eniu jej przez 6 i spierwiastkowaniu powiniene� otrzyma� warto�� liczby ? (suma szeregu jest r�wna ?2/6). Zwr�� uwag�, �e pierwsza warto�� indeksu to 1, a nie 0. Dok�adno�� oblicze� mo�na sprawdzi� por�wnuj�c z warto�ci� odczytan� z w�asno�ci Math.PI.
 * Rozk�ad liczby na czynniki pierwsze
 */
 //Program obliczaj�cy sum� liczb od 1 do 100

void task1()
{
	int number;
	std::cout << "podaj liczb�\n";

	for (int i = 1; i < 101; i++)
	{
		number = number + i;
	}
	std::cout << "suma wynosi " << number;
}
// * Program sprawdzaj�cy czy podana liczba jest liczb� doskona�� (czyli tak�, kt�rej suma dzielnik�w (z wy��czeniem samej siebie) jest r�wna danej liczbie,
void task2()
{
	
	int number, sum = 0;
	std::cout << "podaj liczb�\n";
	std::cin >> number;
	for (int i = 1; i != number; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	if (number == sum)
	{
		std::cout << "liczba jest liczb� doskona��";
	}
}
//Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task3()
{
	int result = 1;
	for (int i = 1; i != 11; i++)
	{
		result = 1;
		result *= i * i;
		std::cout << result << '\n';
	}
}
//Program obliczaj�cy n!.
void task4()
{
	int number, result = 1;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;
	for (int i = 1; i != number + 1; i++)
	{
		result *= i;
	}
	std::cout << result;
}
//Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task5()
{
	for (int i = 1; i <= 10; i++)
		std::cout << i << "!";
}
//Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task6()
{
	for (int i = 0; i < 11; i++)
	{

	}

}
int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//ask5();
}

