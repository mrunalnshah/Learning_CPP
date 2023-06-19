/*
 * DESC :
 * Exercise Section 1.4.2
 * Exercise : 1.13 (1.11)	
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

        for(; number1 <= number2; number1++) {
            std::cout << number1 << std::endl;
        }
    }else {
        for (;number1 >= number2; number1--) {
            std::cout << number1 << std::endl;
        }
    }
    return 0;
}