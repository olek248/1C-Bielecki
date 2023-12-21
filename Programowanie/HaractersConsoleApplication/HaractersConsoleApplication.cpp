// HaractersConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*
typy znakowe:
*   char - 1 bajt ca�kowitoliczbowa ze znakiem <-128, 128
*/
//napisz program kt�ry pobierze znak od u�ytkownika i wy�wietli go.

/*
* Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
* Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
* Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).

* Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/

//Napisz program kt�ry pobierze znak od u�ytkownika i wy�wieli go.
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

//napisz program, kt�ry poprosi ci� o twoje imi� i ci� przywita.
void task3()
{
    std::string userName;
    std::cout << "podaj swoj� imi�\n";
    std::cin >> userName;
    
    std::cout << "Witaj " << userName << " tutaj.\n";
}

//program sprawdzaj�cy czy podane has�o jest poprawne
//(np. je�li has�o jest "abc123" program powinien wy�wietli� "has�o poprawne"
//je�li inne, powinien wy�wietli� "has�o niepoprawne").
void task4()
{
    std::string password;
    std::cout << "podaj has�o: \n";
    std::cin >> password;
    if (password == "abc123")
        std::cout << "has�o jest poprawne\n";
    else
        std::cout << "has�o niepoprawne\n";
}

//napisz program, kt�ry wczyta �a�cuch znak�w i policzy ile jest ma�ych liter 'a'.
void task5()
{
    std::string textFromUser;
    std::cout << "podaj �a�cuch znak�w\n";
    std::cin >> textFromUser;

    int numberOfCharacters = 0;
    
    std::cout << "Pierwszy znak to " << textFromUser[0] << "\n";
    textFromUser[1] = 'x';
    std::cout << "Ilo�� znak�w " << textFromUser.length() << "\n";

    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[1] == 'a')
            numberOfCharacters++;
    }

}

//* Napisz program, kt�ry b�dzie prosi� o has�o. 
// Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task6()
{
    std::string password;
    
    do
    {
        std::cout << "podaj has�o\n";
        std::cin >> password;
    } while (password != "majonezkielecki");
    std::cout << "gratulacje u�ytkowniku poprawne has�o";
}

//* Napisz program, 
//kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task7()
{
    std::string userText;
    int numberOfVovels;
    int numberOfConsonat;
    std::cout << "podaj ci�g znak�w\n";
    std::cin >> userText;
    for (int i = 0; i < userText.length(); i++)
    {
        if (userText[i] >= 'a' && userText[i] <= 'z')
            if (userText[i] == 'a' ||
                userText[i] == 'e' ||
                userText[i] == 'i' ||
                userText[i] == 'i' ||
                userText[i] == 'i' ||
                userText[i] == 'o' ||
                userText[i] == 'u' ||
                userText[i] == 'y')
            {
                std::cout << "litera to samog�oska\n" << i + 1;
                numberOfVovels++;
            }
            else
            {
                std::cout << "litera to sp�g�oska\n" << i + 1;
                numberOfConsonat++;
            }
    }
    std::cout << "liczba samog�osek to " << numberOfVovels << "\n";
    std::cout << "liczba sp�g�osek to " << numberOfConsonat << "\n";
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
    task7();
}


