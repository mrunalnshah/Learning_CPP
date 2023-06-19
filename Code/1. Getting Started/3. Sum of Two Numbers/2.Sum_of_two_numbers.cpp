/*
 * DESC : program to prompt the user to give us two numbers and then print their sum
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

    std::cout << "The Sum of " << number1 << " and " << number2 << " is " << number1 + number2 << std::endl;

    return 0;
}