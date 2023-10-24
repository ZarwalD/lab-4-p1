#include <iostream>
#include <clocale>

/**
 *
 * Дано целое число N и набор из N целых чисел.
 * Если в наборе имеются положительные числа, то вывести TRUE;
 * в противном случае вывести FALSE.
 * 
**/

int main()
{
    setlocale(LC_ALL, "ru");
    int i;
    std::cout << "Введите число: ";
    std::cin >> i;
    if (i < 0)
    {
        std::cout << "Введите корректное число" << std::endl;
        return 1;
    }
    for (int j = 0; j < i; j++)
    {
        int k;
        std::cin >> k;
        if (k < 0)
        {
            std::cout << "FALSE";
            return 1;
        }
    }
    std::cout << "TRUE";
}
