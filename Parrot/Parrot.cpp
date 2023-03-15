/*
Parrot
Pawelski
3/15/2023
C++
*/

#include <iostream>
#include <string>

int main()
{
    std::string phrase;
    std::cout << "Say something >> ";
    std::cin >> phrase; // Modify this line so that it reads the entire line of text
    std::cout << "Polly says, \"" << phrase << "\"\n";
    return 0;
}
