/*
 * DESC : Sum Numbers from number1 to number2 using While Loop
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 19th of June 2023
 */

#include <iostream>

int main() {
    int m = 0, n = 0;
    int number1 = 0, number2 = 0;
    int sum = 0;

    std::cout << "Enter Two Numbers : " << std::endl;

    if(!(std::cin >> number1 >> number2)) {
        std::cerr << "Invalid Input" << std::endl;
        return -1;
    }
    n = std::min(number1,number2);
    m = std::max(number1,number2);

    while(n <= m && m <= INT_MAX) {
        sum = sum + n;
        n++;
    }
    std::cout << "The Sum from " << number1 << " to " << number2 << " is " << sum << std::endl;

    return 0;
}