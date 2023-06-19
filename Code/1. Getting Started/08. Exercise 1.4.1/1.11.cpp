/*
 * DESC :
 * Exercise Section 1.4.1
 * Exercise : 1.11
 *
 * Question : Write a program that prompts the user for two integers.
				Print each number in the range specified by those two integers.
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 19th of June 2023
 */

#include <iostream>

int main() {
    int number1 = 0, number2 = 0;

    std::cout << "Enter two Integer : " << std::endl;
    std::cin >> number1 >> number2;

    if ( number1 <= number2) {
        while (number1 <= number2) {
            std::cout << number1 << std::endl;
            number1++;
        }
    }else {
        while (number1 >= number2) {
            std::cout << number1 << std::endl;
            number1--;
        }
    }
    return 0;
}