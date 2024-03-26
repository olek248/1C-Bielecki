#include <iostream>

#pragma region zadanie1
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
#pragma endregion to jest zadanie1
#pragma region zadanie2
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
    float temperature, first_converted_temperature, second_converted_temperature;
    std::cout << "1. celsjusz, 2. fahrenheit, 3. kelvin\n";
    std::cin >> numberOfOperation;
    if (numberOfOperation == 1)
    {
        std::cout << "Podaj temperatur� w stopniach Celsiusza\n";
        std::cin >> temperature;
        first_converted_temperature = (temperature * 1.8) + 32;
        second_converted_temperature = temperature + 273.15;
        std::cout << "temperatura w stopniach fahrenheita wynosi: " << first_converted_temperature << "\n";
        std::cout << "temperatura w stopniach kelvina wynosi: " << second_converted_temperature;

    }
    else if (numberOfOperation == 2)
    {
        std::cout << "Podaj temperatur� w stopniach fahrenheita\n";
        std::cin >> temperature;
        first_converted_temperature = (temperature - 32) / 2;
        second_converted_temperature = (temperature + 459, 67) * 5 / 9;
        std::cout << "temperatura w stopniach celsjusza wynosi: " << first_converted_temperature << "\n";
        std::cout << "temperatura w stopniach kelvina wynosi: " << second_converted_temperature << "\n";
    }
    else
    { 
        std::cout << "podaj temperature w stopniach kelvina\n";
        std::cin >> temperature;
        first_converted_temperature = temperature - 273.15;
        second_converted_temperature = temperature * 9 / 5 - 459, 67;
        std::cout << "temperatura w stopniach celsjusza wynosi: " << first_converted_temperature << "\n";
        std::cout << "temperatura w stopniach fahrenheita:  " << second_converted_temperature << "\n";
    }
}
#pragma endregion to jest zadanie 2
#pragma region zadanie3
/*
ZADANIE
Symulator rzutu kostk�
Napisz program, kt�ry b�dzie symulowa� rzut kostk�.Program powinien umo�liwia� u�ytkownikowi wyb�r rodzaju kostki(np. 6 - �cienna, 10 - �cienna, 20 - �cienna) oraz ilo�� rzut�w.Po wykonaniu rzut�w, program powinien wy�wietli� wyniki oraz sum� otrzymanych warto�ci.
Instrukcje:
Popro� u�ytkownika o wyb�r rodzaju kostki(np. 6 - �cienna, 10 - �cienna, 20 - �cienna).
Popro� u�ytkownika o podanie ilo�ci rzut�w.
Wykonaj podan� liczb� rzut�w wybranej kostk�, zapisuj�c wyniki.
Wy�wietl otrzymane wyniki oraz sum� otrzymanych warto�cis.
Przyk�adowe dzia�anie programu :
Symulator rzutu kostk�
---------------------- -
Wybierz rodzaj kostki(6 / 10 / 20) : 10
Ile rzut�w chcesz wykona� ? : 5
Wyniki rzut�w kostk� 10 - �cienn� :
    1. Rzut 1 : 7
    2. Rzut 2 : 3
    3. Rzut 3 : 10
    4. Rzut 4 : 5
    5. Rzut 5 : 8
    Suma wynik�w : 33
*/
void menu_dice_choose(int dice_type)
{
    std::cout << "1. kostka sze�cienna\n";
    std::cout << "2. kostka dziesi�cio�cienna\n";
    std::cout << "3. kostka dwudziesto�cienna\n";
    std::cin >> dice_type;
}

void task3()
{
   
}
#pragma endregion to jest zadanie 3
#pragma region zadanie4
/*
Konwerter jednostek
Napisz program konwertuj�cy jednostki miar.Program powinien umo�liwia� konwersj� mi�dzy r�nymi jednostkami(np.metry na centymetry, kilogramy na funty) oraz obs�ugiwa� r�ne typy jednostek.
Instrukcje:
Zdefiniuj zestaw jednostek, kt�re chcesz obs�ugiwa�(np.d�ugo��: metry, centymetry, cale; masa: kilogramy, funty).
Popro� u�ytkownika o wyb�r jednostki wej�ciowej i jednostki wyj�ciowej oraz podanie warto�ci do konwersji.
Przekonwertuj warto�� z jednostki wej�ciowej na jednostk� wyj�ciow� na podstawie ustalonego wsp�czynnika konwersji.
Wy�wietl wynik konwersji.
Przyk�adowe dzia�anie programu :
Konwerter jednostek
------------------ -
Wybierz jednostk� wej�ciow� :
1. Metry
2. Centymetry
3. Cale
Wyb�r : 1
Wybierz jednostk� wyj�ciow� :
1. Metry
2. Centymetry
3. Cale
Wyb�r : 2
Podaj warto�� do konwersji : 5
Wynik konwersji : 500 centymetr�w
*/

void task4()
{

}
#pragma endregion to jest zadanie 4
int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    task4();
   
}


