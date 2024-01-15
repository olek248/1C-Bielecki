#include <iostream>

//napisz program kt�ry wczyta np. 5 liczb, a nast�pnie wy�wietli je w odwrotnej kolejno�ci
void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    //std::cin >> ARRAY_SIZE; // jest b��d!!!
    int numbers[ARRAY_SIZE];
    //numbers[2] = 70;

    /*
    std::cout << "Podaj dan�\n";
    std::cin >> numbers[0];
    std::cout << "Podaj dan�\n";
    std::cin >> numbers[1];
    std::cout << "Podaj dan�\n";
    std::cin >> numbers[2];
    std::cout << "Podaj dan�\n";
    std::cin >> numbers[3];
    std::cout << "Podaj dan�\n";
    std::cin >> numbers[4];
    */
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << "Podaj dan�\n";
        std::cin >> numbers[i];
    }

    std::cout << "Podane dane w odwrotnej kolejno�ci:\n";
    for (int i = ARRAY_SIZE - 1; i >= 0; i--)
    {
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";
}
void task2()
{
    const unsigned short LOWER_RANGE = 5;
    const unsigned short UPPER_RANGE = 7;

    const unsigned short ARRAY_SIZE = 3;
    int numbers[ARRAY_SIZE];

    srand(time(0));

    std::cout << "wylosowane liczby to:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        std::cout << numbers[i] << ", ";
    }
    std::cout << "\n";

    double sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + numbers[i];
    }
    double avg = sum / ARRAY_SIZE;
    std::cout << "�rednia artmetyczna wynosi: " << avg << "\n";
}
void task3()
{
    {
        const unsigned short LOWER_RANGE = 0;
        const unsigned short UPPER_RANGE = 70;

        const unsigned short ARRAY_SIZE = 5;
        int numbers[ARRAY_SIZE];

        srand(time(0));

        std::cout << "wylosowane liczby to:\n";
        for (int i = 0; i < ARRAY_SIZE; i++)
        {
            numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
            std::cout << numbers[i] << ", ";
        }
        std::cout << "\n";
    }
}
int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    task3();
}

