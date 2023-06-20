/*
 * DESC :
 * Exercise Section 1.5.1
 * Exercise : 1.20	
 *
 * Question : Use Sales_item.h to write a program that reads a set of book sales transactions, writing each transaction to the standard output.
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 20th of June 2023
 */

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book;

    std::cout << "Enter Book Sales Transaction : (ISBN, Number of Copies and Price per Copy):" << std::endl;

    while(std::cin >> book) {
        std::cout << book << std::endl;
    }
    return 0;
}