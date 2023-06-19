/*
 * DESC :
 * Exercise Section 1.4.2
 * Exercise : 1.13 (1.11)	
 *
 * Question : Write a program that prompts the user for two integers.
				sum from nth to mth and print the summation.
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 19th of June 2023
 */

#include <iostream>

int main() {
    int number1 = 0, number2 = 0;
    int n = 0, m = 0;
    int sum = 0;

    std::cout << "Enter Two Numbers : " << std::endl;
    if(!(std::cin >> number1 >> number2)) {
        std::cerr << "Invalid Input " << std::endl;
        return -1;
    }

    n = std::min(number1,number2);
    m = std::max(number1, number2);

    for (;n <= m && m <= INT_MAX; n++) {
        sum = sum + n;
    }
    std::cout << "Sum of " << number1 << " and " << number2 << " is " << sum << std::endl;

    return 0;
}
