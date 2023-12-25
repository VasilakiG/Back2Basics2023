// File: firstExercise.cpp
//
// Author: Vasilaki Tocili
//
// Date: 24.12.23
//
// Version: 1.0
//
// Description: The long way.
//

#include <bits/stdc++.h>

int main()
{
    int N, K, iterator, counter;

    std::cin >> N >> K;

    if (N < 1)
    {
        std::cout << "-1";
        return 0;
    }

    int firstArray[N], secondArray[N], thirdArray[2*N];

    for(iterator = 0; iterator < N; iterator++)
    {
        std::cin >> firstArray[iterator];
        thirdArray[iterator] = firstArray[iterator];
    }

    counter = iterator;

    for (iterator = 0; iterator < N; iterator++)
    {
        std::cin >> secondArray[iterator];
        thirdArray[counter] = secondArray[iterator];
        counter ++;
    }

    std::sort(thirdArray, thirdArray + 2*N);

    for (iterator= 0; iterator < counter; iterator++)
    {
        if (thirdArray[iterator] == K)
        {
            continue;
        }
        std::cout << thirdArray[iterator] << " ";
    }

    return 0;
}