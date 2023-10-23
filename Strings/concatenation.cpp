#include <bits/stdc++.h> // библиотека за скоро сѐ

int main()
{
    // Дефинирање на променливите за зборовите
    std::string greeting = "Hello Finki";
    std::string farewell = "and goodbye";

    // Дефинирање на помошни зборови
    std::string space = " ";
    std::string backslash = "\\";
    std::string single_quote = "\'";
    std::string double_quote = "\"";
    std::string tab = "\t";
    std::string new_line = "\n";

    // Конкатенација на зборовите со помош на операторот +
    std::string message = greeting + space + farewell;

    // Испечати го резултатот
    std::cout << "The concatenated message is: " << double_quote << message << double_quote << std::endl;

    return 0;
}
