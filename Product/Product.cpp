/*
Product
Pawelski
Pawelski
3/15/2023
C++
*/

#include <iostream>

int main()
{
    int number1, number2, product;
    std::cout << "Enter a number >> ";
    std::cin >> number1;
    std::cout << "Enter another number >> ";
    std::cin >> number2;
    product = number1 * number2;
    std::cout << number1 << " * " << number2 << " = " << product << std::endl;
    return 0;
}
