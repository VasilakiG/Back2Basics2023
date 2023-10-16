#include <bits/stdc++.h> // библиотека за скоро сѐ

int main()
{
    // Разликата во податочните типови е нивната големина,
    // меѓутоа исто така поради стандарди поставени за C++
    // различни податочни типови со иста големина се
    // употребуваат за различна намена

    bool oneByteBoolean;
    char oneByteCharacter;
    int8_t crossPlatformOneByteDataType; // иста големина како претходните две
    // 8 oзначува бити, а тоа е 1 бајт, исто така ова е signed податочен тип

    short twoByteInteger;
    int16_t crossPlatformTwoByteDataType; // иста големина како претходното
    // 16 oзначува бити, а тоа се 2 бајти, исто така ова е signed податочен тип

    int fourByteInteger;
    float fourByteFloat;
    long fourByteLong;
    int32_t crossPlatformFourByteDataType; // иста големина како претходните три
    // 32 oзначува бити, а тоа се 4 бајти, исто така ова е signed податочен тип

    double eightByteDouble;
    long long eightByteLong;
    int64_t crossPlatformEightByteDataType; // иста големина како претходните две
    // 64 oзначува бити, а тоа се 8 бајти, исто така ова е signed податочен тип

    // за unsigned податочен тип се користи unsigned пред примитвниот тип
    // или "u" пред cross-platform податочниот тип
    unsigned char unsignedChar;
    // unsigned bool нема поента да се користи
    unsigned int unsignedInteger;
    // unsigned float нема поента да се користи
    // unsigned double нема поента да се користи
    unsigned long unsignedLong;

    uint8_t unsignedOneByteDataType;
    uint16_t unsignedTwoByteDataType;
    uint32_t unsignedFourByteDataType;
    uint64_t unsignedEightByteDataType;
}