// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
       //Napisz program kt�ry wczyta liczb� od u�ytkownika i j� wy�wietli na konsoli
       
    std::cout << "Podaj Liczbe\n";
    int numberFromUser;
    std::cin >> numberFromUser;

    std::cout << "Podales " << numberFromUser << "\n";
}

/*
// Algorytm- sko�czony zbi�r instrukcji, kt�ry rozwi�zuje zadany problem. Okre�la te� kolejno�� wykonywanych instrukcji. 
zapis algorytmu:
 * rysunki
 * opis s�owny
 * w punktach
 * schemat blokowy
 * kod �r�d�owy danego j�zyka programowania
 * pseudokod
 
Zmienna- pewien obszar w pami�ci operacyjnej, w kt�rej mo�na w danej chwili przechowa� tylko jedn� dan�

Instrukcja deklaracji zmiennej:
typ_zmiennej nazwa_zmiennej;

typ zmiennej- wielko�� obszaru pami�ci, interpretacja ci�gu bit�w
int - 4 bajtowa liczba ca�kowita ze znakiem <-2 147 483 648, 2 147 483 647>
short - 2 bajtowa liczba ca�kowita ze znakiem <-32 768, 32 767>
long - to samo co int
long long - 8 bajtowa liczba ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

unsigned-zmienna bez znaku <0, 2*max+1>

float - 4 bajtowa liczba rzeczywista, dok�adno�� 6-7 cyfr po przecinku
double - 8 bajtowa liczba rzeczywista, dok�adno�� 15-16 cyfr po przecinku
long double - 12 bajtowa liczba rzeczywista, dok�adno�� 19-20 liczb po przecinku

Nazwa zmiennej - nazwa obszaru pami�ci, identyfikator
Warunki niezb�dne:
*dozwolone znaki:
    - alfabet angielski aA-zZ
    -cyfry arabskie 0-9
    -podkre�lenie (pod�oga) (_)
* pierwszym znakiem nie mo�e by� cyfra
* unikalny w swoim zakresie widoczno�ci
* nie mo�e to by� s�owo kluczowe (zarezerwowane) danego j�zyka

Warunki programist�w:
* nazwa zmiennej powinna oddawa� charakter przechowywania danych
* je�li wiele s��w to w miejscu spacji podkre�lenie lub zaczynaj�c od drugiego s�owa piszemy je z du�ej litery
* piszemy po angielsku
*/