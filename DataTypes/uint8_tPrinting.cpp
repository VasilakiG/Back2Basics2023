#include <bits/stdc++.h>

// Задачата покажува дека uint8 се однесува како char во случајов,
// бидејќи се печатат сите карактери од тестатурата

int main()
{
    uint16_t SIZE_OF_UINT8 = 255; // големината се става на 255 бидејќи се почнува од 0,
    //                               заедно со неа тоа е 256 == 2^8

    // на крајот дали ќе ставиме ++i или i++ не менува
    for (uint8_t i = 0; i < SIZE_OF_UINT8; ++i)
    {
        std::cout << i << std::endl;
    }

    return 0;
}