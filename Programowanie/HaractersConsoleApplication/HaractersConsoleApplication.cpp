// HaractersConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
typy znakowe:
*   char - 1 bajt ca�kowitoliczbowa ze znakiem <-128, 128
*/
//napisz program kt�ry pobierze znak od u�ytkownika i wy�wietli go.
void task1()
{
    char characterfromUser;
    std::cout << "podaj znak\n";
    std::cin >> characterfromUser;

    std::cout << "poda�e� znak: " << characterfromUser << "\n";
}
//napisz program kt�ry wczyta znak z klawiatury i sprawdzi czy jest to ma�a litera alfabetu
void task2()
{
    unsigned char characterFromUser;
    std::cout << "podaj znak\n";
    std::cin >> characterFromUser;
    if (characterFromUser >= 'a' && characterFromUser <= 'z')
        std::cout << "jest to ma�a litera alfabetu\n";
    else
        std::cout << "nie jest to ma�a litera alfabetu\n";
}
int main()
{
    //task1();
    task2();
}


