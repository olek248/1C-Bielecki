// Pointers.ConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void task1()
{
    int firstNumber = 48;
    int secondNumber = 697;
    int tab[2] = { 15, 87 };

    std::cout << "Warto�� pierwszej zmiennej " << firstNumber << "\n";
    std::cout << "Adres pierwszej zmiennej " << &firstNumber << "\n";
    std::cout << "Warto�� drugiej zmiennej " << secondNumber << "\n";
    std::cout << "Adres drugiej zmiennej " << &secondNumber << "\n";
    *(&secondNumber) = 741;
    std::cout << "Warto�� drugiej zmiennej " << secondNumber << "\n";

    std::cout << "Zawarto�� zerowej kom�rki " << tab[0] << "\n";
    std::cout << "Zawarto�� pierwszej kom�rki " << tab[1] << "\n";
    std::cout << "Adres zerowej kom�rki " << &tab[0] << "\n";
    std::cout << "Adres pierszej kom�rki " << &tab[1] << "\n";
    std::cout << "Adres tablicy " << tab << "\n";
    std::cout << "Zawarto�� zerowej kom�rki " << *(tab + 0) << "\n";
    std::cout << "Zawarto�� zerowej kom�rki " << *(tab + 1) << "\n";

}
int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}


