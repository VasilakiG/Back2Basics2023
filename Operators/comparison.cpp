#include <bits/stdc++.h> // библиотека за скоро сѐ

int main()
{
    int numberOne, numberTwo;

    // Внеси ги двата броја
    std::cout << "Enter two numbers: ";
    std::cin >> numberOne >> numberTwo;

    // Провери дали бројот numberOne е поголем од numberTwo
    if (numberOne > numberTwo)
    {
        std::cout << numberOne << " is greater than " << numberTwo << std::endl;
    }

    // Провери дали бројот numberOne е помал од numberTwo
    if (numberOne < numberTwo)
    {
        std::cout << numberOne << " is less than " << numberTwo << std::endl;
    }

    // Провери дали бројот numberOne е еднаков на numberTwo
    if (numberOne == numberTwo)
    {
        std::cout << numberOne << " is equal to " << numberTwo << std::endl;
    }

    // Провери дали бројот numberOne е поголем или еднаков на numberTwo
    if (numberOne >= numberTwo)
    {
        std::cout << numberOne << " is greater than or equal to " << numberTwo << std::endl;
    }

    // Провери дали бројот numberOne е помал или еднаков на numberTwo
    if (numberOne <= numberTwo)
    {
        std::cout << numberOne << " is less than or equal to " << numberTwo << std::endl;
    }

    // Провери дали бројот numberOne е различен од numberTwo
    if (numberOne != numberTwo)
    {
        std::cout << numberOne << " is not equal to " << numberTwo << std::endl;
    }

    return 0;
}
