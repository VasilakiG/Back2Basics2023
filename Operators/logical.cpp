#include <bits/stdc++.h> // библиотека за скоро сѐ

#include <iostream>

int main()
{
    int numberOne = 1, numberTwo = 0;

    // Логички оператор && (AND), ако двете услови се исполнети, тогаш целиот израз е вистинит
    if (numberOne && numberTwo)
    {
        std::cout << "numberOne AND numberTwo is true" << std::endl;
    }
    else
    {
        std::cout << "numberOne AND numberTwo is false" << std::endl;
    }

    // Логички оператор || (OR), ако барем еден од условите е исполнет, тогаш целиот израз е вистинит
    if (numberOne || numberTwo)
    {
        std::cout << "numberOne OR numberTwo is true" << std::endl;
    }
    else
    {
        std::cout << "numberOne OR numberTwo is false" << std::endl;
    }

    // Логички оператор ! (NOT), ако условот не е исполнет, тогаш целиот израз е вистинит
    if (!numberOne)
    {
        std::cout << "NOT numberOne is true" << std::endl;
    }
    else
    {
        std::cout << "NOT numberOne is false" << std::endl;
    }

    if (!numberTwo)
    {
        std::cout << "NOT numberTwo is true" << std::endl;
    }
    else
    {
        std::cout << "NOT numberTwo is false" << std::endl;
    }

    return 0;
}
