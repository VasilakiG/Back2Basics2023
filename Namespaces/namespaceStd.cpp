#include <bits/stdc++.h> // библиотека за скоро сѐ

// using namespace std;  ова е лоша практика во индустрија

// using std::cout;  доколку нема коментар, слободно можеме
//                   после ова да користиме cout без std::
// using std::cin;   доколку нема коментар, слободно можеме
//                   после ова да користиме cin без std::
// претходниве линии ни овозможуваат користење
// само на cout и cin од namespace-от std,
// овој концепт се нарекува tree-shaking

int main()
{
    int number;

    // вака сме сигурни дека го користиме cout од namespace-от std
    std::cout << "Insert a value for the number: ";

    // вака сме сигурни дека го користиме cin од namespace-от std
    std::cin >> number;

    std::cout << "You entered the number: " << number << std::endl;
    // endl исто така е од namespace-от std

    return 0;
}