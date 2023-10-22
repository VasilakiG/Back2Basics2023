#include <bits/stdc++.h> // библиотека за скоро сѐ

int main()
{
    int numberOne = 20;
    int numberTwo = 5;

    std::cout << "Enter two numbers: ";
    std::cin >> numberOne >> numberTwo;

    std::cout << "Addition: " << numberOne + numberTwo << std::endl;       // собирање
    std::cout << "Subtraction: " << numberOne - numberTwo << std::endl;    // одземање
    std::cout << "Multiplication: " << numberOne * numberTwo << std::endl; // множење
    std::cout << "Division: " << numberOne / numberTwo << std::endl;       // под услов дека numberTwo != 0
    std::cout << "Modulus: " << numberOne % numberTwo << std::endl;        // модул го дава остатокот од делењето

    // Постојат и два специјални оператори за зголемување и намалување за 1, наречени increment и decrement оператори.

    // меѓутоа, битна е разликата дали операторот се наоѓа пред или по бројот
    // пример:
    std::cout << "Postincrement: " << numberOne++ << std::endl; // го печати бројот пред да го зголеми, печати 20, а во позадина го зголемува на 21
    std::cout << "Postdecrement: " << numberOne-- << std::endl; // го печати бројот пред да го намали, печати 21, а во позадина го намалува на 20

    std::cout << "Preincrement: " << ++numberOne << std::endl; // го печати бројот после зголемувањето, печати 21, исто како и во позадина
    std::cout << "Predecrement: " << --numberOne << std::endl; // го печати бројот после намалувањето, печати 20, исто како и во позадина

    return 0;
}