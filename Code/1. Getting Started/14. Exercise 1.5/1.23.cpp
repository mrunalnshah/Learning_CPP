/*
 * DESC :
 * Exercise Section 1.5.2
 * Exercise : 1.23	
 *
 * Question : Write a program that reads several transactions and counts how many transactions occur for each ISBN .
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 20th of June 2023
 */

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item currentValue, value;

    std::cout << "Enter Book Transaction : (ISBN NoOfCopies PricePerCopy) " << std::endl;

    if(std::cin >> currentValue) {
        int count = 1;
        while(std::cin >> value) {
            if(currentValue.isbn() == value.isbn()) {
                ++count;
            }else {
                std::cout << currentValue.isbn() << " Occurs " << count << (count > 1 ? " times." : " time.") << std::endl;
                currentValue = value;
                count = 1;
            }
        }
        std::cout << currentValue.isbn() << " Occurs " << count << (count > 1 ? " times." : " time.") << std::endl;
    }
    return 0;
}