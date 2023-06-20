/*
 * DESC :
 * Exercise Section 1.5.1
 * Exercise : 1.21	
 *
 * Question : Write a program that reads two Sales_item objects that have the same ISBN and produces their sum
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 20th of June 2023
 */

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book1, book2;

    std::cout << "Enter Book 1 : " << std::endl;
    std::cin >> book1;

    std::cout << "Enter Book 2 : " << std::endl;
    std::cin >> book2;

    if(book1.isbn() == book2.isbn()) {
        std::cout << "book sum" << std::endl;
        std::cout << book1 + book2 << std::endl;
    }else {
        std::cout << "book sum" << std::endl;
        std::cout << book1 << std::endl;
        std::cout << book2 << std::endl;
    }

    return 0;
}