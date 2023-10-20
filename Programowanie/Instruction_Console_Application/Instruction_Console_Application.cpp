

#include <iostream>

/*
operatorzy warunkowe:
> - wi�ksze
< - mniejsze
>= - wi�ksze b�d� r�wne
<= - mniejsze b�d� r�wne
== - r�wne
!= - r�ne
operatorzy logiczne:
&& - AND
|| - OR
! - not


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
	/*
	if (rest == 0)
		std::cout << "liczba jest parzysta\n";
	if (rest != 0) // rest == 1
		std::cout << "liczba jest nieparzysta\n";
		*/
	if (rest == 0)
		std::cout << "liczba jest parzysta\n";
	else
		std::cout << "liczba jest nieparzysta\n";
}

//napisz program, kt�ry wy�wietli informacje czy liczba jest z zakresu: <1 ; 10).
void task3()
{
	
	int number;
	std::cout << "podaj liczbe:\n";
	std::cin >> number;
	/*
	if (number >= 1)
	{
		if (number < 10)
			std::cout << "liczba jest w przedziale\n";
		else
			std::cout << "liczba jest poza zakresu\n";
	}
	else
		std::cout << "liczba jest poza zakresu\n";
	*/
	
	if (number >= 1 && number < 10)
		std::cout << "twoja liczba jest w przedziale\n";
	else
		std::cout << "twoja liczba jest poza przedzia�em\n";
}

//napisz program ktory wykona dzielenie dwoch liczb
void task4()
{
	float firstNumber, secondNumber;
	std::cout << "podaj pierwsza liczbe\n";
	std::cin >> firstNumber;
	std::cout << "podaj druga liczbe\n";
	std::cin >> secondNumber;
	if (secondNumber != 0)
	{
		float quoitent = firstNumber / secondNumber;
		std::cout << "wynik dzielenia " << quoitent << "\n";
	}
	else
		std::cout << "dzielenie przez zero!!!\n";
}



/*
*. Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a (w kilogramach) i wzrostu (w metrach).
Na podstawie tych danych oblicz wska�nik BMI (Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t. Wy�wietl odpowiedni komunikat.
*. Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe. Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
*. Program sprawdzaj�cy czy podana data jest poprawna (np. sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)

*/


//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne. Wy�wietl odpowiedni komunikat
void task5()
{
	int firstNumber, secondNumber;
	std::cout << "podaj pierwsza liczbe\n";
	std::cin >> firstNumber;
	std::cout << "podaj druga liczbe\n";
	std::cin >> secondNumber;
	if (firstNumber == secondNumber)
		std::cout << "liczby sa rowne\n";
	else
		std::cout << "liczby sa rozne\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia. Wy�wietl odpowiedni komunikat.
void task6()
{
	int wiek;
	std::cout << "podaj swoj wiek\n";
	std::cin >> wiek;
	if (wiek >= 18)
		std::cout << "jestes pelnioletni\n";
	else
		std::cout << "jestes nieletni\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�. Wy�wietl wynik.
void task7()
{
	int liczba_ca�kowita, warto��_bezwzgl�dna;
	std::cout << "podaj liczbe ca�kowit�\n";
	std::cin >> liczba_ca�kowita;
	if (liczba_ca�kowita > 0)
		warto��_bezwzgl�dna = liczba_ca�kowita;
	else
		warto��_bezwzgl�dna = liczba_ca�kowita * -1;
	std::cout << warto��_bezwzgl�dna;
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
void task8()
{
	int dzie�;
	std::cout << "podaj liczbe dnia w tygodniu\n";
	std::cin >> dzie�;
	if (dzie� == 1)
		std::cout << "dzi� jest poniedzia�ek\n";
	if (dzie� == 2)
		std::cout << "dzi� jest wtorek\n";
	if (dzie� == 3)
		std::cout << "dzi� jest �roda\n";
	if (dzie� == 4)
		std::cout << "dzi� jest czwartek\n";
	if (dzie� == 5)
		std::cout << "dzi� jest pi�tek\n";
	if (dzie� == 6)
		std::cout << "dzi� jest sobota\n";
	if (dzie� == 7)
		std::cout << "dzi� jest niedziela\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
void task9()
{
	int pierwsza_ca�kowita, druga_ca�kowita;

}








int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	task9();

}




