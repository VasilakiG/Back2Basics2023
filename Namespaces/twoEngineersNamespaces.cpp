//
// Created by vasilaki on 12.10.2023.
//
#include <bits/stdc++.h> // библиотека за скоро сѐ

namespace engineer1
{
    int GRAVITY = 10;
}

namespace engineer2
{
    // float GRAVITY = 9.81;  компајлерот автоматски ќе го претвори float во double
    //                        меѓутоа, за да не се деси тоа
    // float GRAVITY = 9.81F; ставаме едно F(може и мало f) и така експлицитно
    //                        кажуваме дека оваа променлива има float вредност

    double GRAVITY = 9.81; // вака ја ставаме вредноста директно на double
}

int main()
{
    std::cout << "Engineer 1 takes the gravitational constant as " << engineer1::GRAVITY << " m/s" << std::endl;

    std::cout << "Engineer 2 takes the gravitational constant as " << engineer2::GRAVITY << " m/s" << std::endl;
}