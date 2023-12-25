// File: basicFileOperations.cpp
//
// Author: Vasilaki Tocili
//
// Date: 24.12.23
//
// Version: 1.0
//
// Description: Basic file operations.
//

#include <iostream>
#include <fstream>

int main()
{
    std::ofstream MyFile;

    MyFile.open("example.txt");

    MyFile << "Writing this to a file.\n";

    MyFile.close();
}