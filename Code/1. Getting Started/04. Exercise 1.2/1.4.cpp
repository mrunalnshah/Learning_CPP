 * Exercise Section 1.2
 * Exercise : 1.4
 *
 * Question : Write a program to get product of two number .
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

    std::cout << "The Product of " << number1 << " and " << number2 << " is " << number1 * number2 << std::endl;

    return 0;
}