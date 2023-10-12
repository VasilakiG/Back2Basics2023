//
// Created by vasilaki on 12.10.2023.
//
#include <bits/stdc++.h>

namespace engineer1
{
    int GRAVITY = 10;
}

namespace engineer2
{
    double GRAVITY = 9.81;
}

int main()
{
    std::cout << "Engineer 1 takes the gravitational constant as " << engineer1::GRAVITY << " m/s" << std::endl;
    std::cout << "Engineer 2 takes the gravitational constant as " << engineer2::GRAVITY << " m/s" << std::endl;
}