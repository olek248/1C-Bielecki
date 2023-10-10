// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
*. Program obliczaj�cy pole prostok�ta.
*. Program obliczaj�cy obj�to�� sto�ka.
*. Program obliczaj�cy pole ko�a.
*. Program obliczaj�cy warto�� wyra�enia a^2 + b^2
*. Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
*. Program obliczaj�cy obj�to�� kuli o promieniu r
*. Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
*. Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik.
*. Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
*/

       //Napisz program kt�ry wczyta liczb� od u�ytkownika i j� wy�wietli na konsoli
void task1()
{
    std::cout << "Podaj Liczbe\n";
    int numberFromUser;
    std::cin >> numberFromUser;

    std::cout << "Podales " << numberFromUser << "\n";
}


//program obliczaj�cy �redni� artmetyczn� dw�ch liczb
void task2()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj pierwsz� liczb�\n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug� liczb�\n";
    std::cin >> secondNumber;

    int average;
   average = (firstNumber + secondNumber) / 2;

   std::cout << "�rednia to: " << average << "\n";
}

//program obiczaj�cy pole prostok�ta
void task3()
{
    int firstSide, secondSide;
    std::cout << "Podaj pierwszy bok prostok�ta\n";
    std::cin >> firstSide;
    std::cout << "Podaj drugi bok prostok�ta\n";
    std::cin >> secondSide;

    int area;
    area = firstSide * secondSide;
    std::cout << " Pole wynosi ";
    std::cout << area;
}

//program obliczaj�cy obj�to�� sto�ka
void task4()
{
    double height, radius, volume;
    std::cout << "Podaj wysoko�� sto�ka\n";
    std::cin >> height;
    std::cout << "Podaj promie� sto�ka\n";
    std::cin >> radius;

    volume= (height * 3.14 * radius * radius) /3;
    std::cout << "Obj�to�� sto�ka wynosi ";
    std::cout << volume;
}

//program obiczaj�cy pole ko�a
void task5()
{
    int radius, area;
    std::cout << "Podaj promie� ko�a\n";
    std::cin >> radius;
    area = 3.14 * radius * radius;
    std::cout << " Pole wynosi ";
    std::cout << area;
}

//program obliczaj�cy warto�� wyra�enia a^2 + b^2
void task6()
{
    int number_a, number_b, wyrazenie;
    std::cout << "podaj liczbe a\n";
    std::cin >> number_a;
    std::cout << "podaj liczbe b\n";
    std::cin >> number_b;
    wyrazenie = number_a * number_a * number_b * number_b;
    std::cout << " wyra�enie wynosi ";
    std::cout << wyrazenie;
}


//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h
void task7()
{
    int base, height, area;
    std::cout << "podaj podstawe tr�jk�ta\n";
    std::cin >> base;
    std::cout << "podaj wysoko�� tr�jk�ta\n";
    std::cin >> height;
    area = (base * height) / 2;
    std::cout << " pole tr�jk�ta wynosi ";
    std::cout << area;
}


//Program obliczaj�cy obj�to�� kuli o promieniu r
void task8()
{
    int radius, volume;
    std::cout << "podaj promie� ko�a\n";
    std::cin >> radius;
    volume = (3.14 * radius * radius * radius) * 4 / 3;
    std::cout <<  " obj�to�� wynosi ";
    std::cout << volume;
}


//Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h
void task9()
{
    int base_a, base_b, height, area;
    std::cout << "podaj d�ugo�� pierwszej podstawy trapezu\n";
    std::cin >> base_a;
    std::cout << "podaj d�ugo�� drugiej podstawy trapezu\n";
    std::cin >> base_b;
    std::cout << "podaj wysoko�� trapezu\n";
    std::cin >> height;
    area = (base_a + base_b) * height / 2;
    std::cout << " pole wynosi ";
    std::cout << area;
}


//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
void task10()
{
    int number_a, number_b, number_c, weight_a, weight_b, weight_c, weighted_average;
    std::cout << "podaj pierwsz� liczb�\n";
    std::cin >> number_a;
    std::cout << "podaj drug� liczb�\n";
    std::cin >> number_b;
    std::cout << "podaj trzeci� liczb�\n";
    std::cin >> number_c;
    std::cout << "podaj wag� pierwszej liczby\n";
    std::cin >> weight_a;
    std::cout << "podaj wag� drugiej liczby\n";
    std::cin >> weight_b;
    std::cout << "podaj wag� trzeciej liczby\n";
    std::cin >> weight_c;
    weighted_average = (number_a * weight_a + number_b * weight_b + number_c * weight_c) / 3;
    std::cout << " �rednia wa�ona wynosi ";
    std::cout << weighted_average;
}


//Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik.
void task11()
{
    int lenghtM, lenghtCM, lenghtMM;
    std::cout << "podaj d�ugo�� w metrach\n";
    std::cin >> lenghtM;
    lenghtCM = lenghtM * 100;
    lenghtMM = lenghtCM * 10;
    std::cout << "d�ugo�� w centymetrach wynosi: " << lenghtCM << " cm, a w milimetrach wynosi " << lenghtMM << "mm";
}


//Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.
void task12()
{
    double USD, PLN;
    std::cout << "podaj kwot� w z�ot�wkach, kt�r� chcesz zamieni� na dolary\n";
    std::cin >> PLN;
    USD = PLN * 4.32;
    std::cout << " kwota w dolarach wynosi ";
    std::cout << USD;











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
    //task9();
    //task10();
    //task11();
    //task12();
      


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