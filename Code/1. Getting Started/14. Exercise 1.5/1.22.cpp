/*
 * DESC :
 * Exercise Section 1.5.1
 * Exercise : 1.22	
 *
 * Question : Write a program that reads several transactions for the same ISBN . Write the sum of all the transactions that were read.
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 20th of June 2023
 */
#include <iostream>
#include "Sales_item.h"

int main() {

    Sales_item currentValue, value;
    Sales_item sum;

    std::cout << "Enter Book Details (ISBN No.Of.Copies Price.Per.Copy): " << std::endl;

    if(std::cin >> currentValue) {
        sum = currentValue;
        while (std::cin >> value) {
            if(currentValue.isbn() == value.isbn()) {
                sum = sum + value;
            }else {
                std::cout << "Sum is " << sum << std::endl;
                currentValue = value;
                sum = value;
            }
        }
        std::cout << "Sum is " << sum << std::endl;
    }
    return 0;
}