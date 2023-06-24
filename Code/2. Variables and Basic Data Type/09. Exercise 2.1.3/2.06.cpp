/*
 * DESC :
 * Exercise Section 2.1.3
 * Exercise : 2.6	
 *
 * Question : What, if any, are the differences between the following definitions:
					int month = 9, day = 7;
					int month = 09, day = 07;
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 23th of June 2023
 */

#include <iostream>

int main() {
    // Decimal
    int month = 9, day = 7; 
    std::cout << "month : " << month << std::endl;
    std::cout << "day : " << day << std::endl;

    //octal
    //month = 09; // invalid 9 doesnot stand in octal
    day = 07;

    std::cout << "month : " << month << std::endl;
    std::cout << "day : " << day << std::endl;

    return 0;
}