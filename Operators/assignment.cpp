#include <bits/stdc++.h> // библиотека за скоро сѐ
using std::cout;         // користење на cout од стандардната библиотека
using std::endl;         // користење на endl од стандардната библиотека

int main()
{
    int firstNumber = 5;
    int secondNumber = 10;

    // примери за оператори за доделување

    firstNumber = secondNumber;                      // доделување на вредноста од secondNumber на firstNumber
    cout << "firstNumber = " << firstNumber << endl; // печатење на firstNumber (резултат: 10)

    firstNumber += secondNumber;                     // доделување на збирот на firstNumber и secondNumber на firstNumber
    cout << "firstNumber = " << firstNumber << endl; // печатење на firstNumber (резултат: 20)

    firstNumber -= secondNumber;                     // одземање на secondNumber од firstNumber и доделување на резултатот на firstNumber
    cout << "firstNumber = " << firstNumber << endl; // печатење на firstNumber (резултат: 10)

    firstNumber *= secondNumber;                     // множење на firstNumber со secondNumber и доделување на резултатот на firstNumber
    cout << "firstNumber = " << firstNumber << endl; // печатење на firstNumber (резултат: 100)

    firstNumber /= secondNumber;                     // делење на firstNumber со secondNumber и доделување на резултатот на firstNumber
    cout << "firstNumber = " << firstNumber << endl; // печатење на firstNumber (резултат: 10)

    firstNumber %= secondNumber;                     // делење на firstNumber со secondNumber и доделување на остатокот на firstNumber
    cout << "firstNumber = " << firstNumber << endl; // печатење на firstNumber (резултат: 0)

    return 0; // враќање на 0 како индикација за успешно завршување на програмата
}
