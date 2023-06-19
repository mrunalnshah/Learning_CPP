/*
 * DESC :
 * Exercise Section 1.2
 * Exercise : 1.5
 *
 * Question : Write a program to get product of two number . We wrote the output in one large statement. Rewrite the
                program to use a separate statement to print each operand
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 19th of June 2023
 */

#include <iostream>

int main() {
    //std::cout << "Enter Two Numbers : " << std::endl;
    //(std::cout << "Enter Two Numbers :") << std::endl;
    std::cout << "Enter Two Numbers : ";
    std::cout << std::endl;

    int number1 = 0, number2 = 0;

    //std::cin >> number1 >> number2;
    //(std::cin >> number1) >> number2;
    std::cin >> number1;
    std::cin >> number2;

    //std::cout << "The Product of " << number1 << " and " << number2 << " is " << number1 * number2 << std::endl;
    std::cout << "The Product of ";
    std::cout << number1;
    std::cout << " and ";
    std::cout << number2;
    std::cout << " is ";
    std::cout << number1 * number2;
    std::cout << std::endl;

    return 0;
}