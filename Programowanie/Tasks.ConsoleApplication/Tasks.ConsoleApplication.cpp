#include <iostream>

/*
Zadanie: Tworzenie prostego kalkulatora
Napisz program, kt�ry b�dzie dzia�a� jako prosty kalkulator
i b�dzie umo�liwia� u�ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dw�ch liczbach.
Instrukcje:
Popro� u�ytkownika o podanie dw�ch liczb oraz wyb�r operacji (dodawanie, odejmowanie, mno�enie lub dzielenie).
W zale�no�ci od wyboru u�ytkownika, wykonaj odpowiedni� operacj� arytmetyczn�.
Wy�wietl wynik operacji.
Przyk�adowe dzia�anie programu:
Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno�enie
4. Dzielenie
*/
void task1()
{
    int first_number, second_number, result,number_arithmetic_operation;
    std::cout << "1.dodawanie, 2.odejmowanie, 3.mno�enie, 4.dzielenie 0.koniec porgramu\n";
    std::cout << "podaj liczb� operacji\n";
    std::cin >> number_arithmetic_operation;
    
    if (number_arithmetic_operation == 0)
        return;
    else
    {
        std::cout << "podaj pierwsz� liczb�\n";
        std::cin >> first_number;
        std::cout << "podaj drug� liczb�\n";
        std::cin >> second_number;
    }
    if (number_arithmetic_operation == 1)
        result = first_number + second_number;
    else if (number_arithmetic_operation == 2)
        result = first_number - second_number;
    else if (number_arithmetic_operation == 3)
        result = first_number * second_number;
    else if (number_arithmetic_operation == 4)
        result = first_number / second_number;
    else
    {
        std::cout << "podaj prawid�ow� liczb�!\n";
        return;
    }
    std::cout << "wynik to: " << result;
            
        

    

   

}
/*
ZADANIE
Konwersja temperatury
Napisz program, kt�ry b�dzie konwertowa� temperatur� pomi�dzy skalami : Celsiusza, Fahrenheita i Kelvina.
Instrukcje :
    Popro� u�ytkownika o wyb�r jednostki, z kt�rej chce dokona� konwersji(C - Celsiusz, F - Fahrenheit, K - Kelvin).
    Popro� u�ytkownika o podanie temperatury w wybranej jednostce.
    Przelicz temperatur� na pozosta�e jednostki(z wykorzystaniem odpowiednich wzor�w konwersji).
    Wy�wietl przeliczone temperatury.
    Przyk�adowe dzia�anie programu :
Konwerter Temperatur
-------------------- -
Wybierz jednostk� temperatury :
1. Celsiusz(C)
2. Fahrenheit(F)
3. Kelvin(K)
Wyb�r : C
Podaj temperatur� w stopniach Celsiusza : 25
Przeliczona temperatura :
Fahrenheit: 77.0 �F
Kelvin : 298.15 K
*/
void task2()
{
    int numberOfOperation;
    float temperature, Celsius_temperature, fahrenneit_temperature, kelvin_temperature, result_first, result_second;
    std::cout << "1.celsjusz, 2.fahrenheit, 3.kelvin\n";
    std::cin >> numberOfOperation;
    if (numberOfOperation == 1)
    {
        std::cout << "Podaj temperatur� w stopniach Celsiusza\n";
        std::cin >> Celsius_temperature;
        result_first = (Celsius_temperature * 1.8) + 32;
        result_second = Celsius_temperature + 273.15;
        std::cout << "temperatura w stopniach fahrenheita wynosi: " << result_first << "\n";
        std::cout << "temperatura w stopniach kelvina wynosi: " << result_second;

    }
    else if (numberOfOperation == 2)
    {
        std::cout << "Podaj temperatur� w stopniach fahrenheita\n";
        std::cin >> fahrenneit_temperature;
        result_first =
    }
    else
        std::cout << "Podaj temperatur� w stopniach Kelvina\n";

        
}
int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    task2();
   
}


