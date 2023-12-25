// File: firstExercise.cpp
//
// Author: Vasilaki Tocili
//
// Date: 24.12.23
//
// Version: 1.0
//
// Description: Pointers.
//

#include <bits/stdc++.h>

int main()
{
    int N;

    std::cin >> N;

    if (N < 1)
    {
        std::cout << "-1";
        return 0;
    }

    int initialArray[N], evenArray[N], oddArray[N];

    int *pointer = initialArray;
    int evenCounter = 0, oddCounter = 0;

    for(int iterator = 0; iterator < N; iterator++)
    {
        std::cin >> initialArray[iterator];
    }

    for (int iterator = 0; iterator < N; ++iterator)
    {
        if (*pointer % 2 == 0)
        {
            evenArray[evenCounter++] = *pointer++;
        }
        else
        {
            oddArray[oddCounter++] = *pointer++;
        }
    }

    for (int i = 0; i < evenCounter; ++i)
    {
        std::cout << evenArray[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < oddCounter; ++i)
    {
        std::cout << oddArray[i] << " ";
    }

    return 0;
}