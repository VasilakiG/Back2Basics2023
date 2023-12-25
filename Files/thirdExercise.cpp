// File: firstExercise.cpp
//
// Author: Vasilaki Tocili
//
// Date: 25.12.23
//
// Version: 1.0
//
// Description: Sexy matrix.
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

    int initialArray[N*N];

    for(int iterator = 0; iterator < N*N; iterator++)
    {
        std::cin >> initialArray[iterator];
    }

    std::sort(initialArray, initialArray + N*N);

    for (int i = 0; i < N*N; ++i)
    {
        std::cout << initialArray[i] << " ";
        if ( (i+1) % N == 0)
        {
            std::cout << std::endl;
        }
    }

    return 0;
}