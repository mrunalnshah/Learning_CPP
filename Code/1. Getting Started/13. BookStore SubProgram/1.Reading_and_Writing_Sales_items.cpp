/*
 * DESC : program reads data from the standard input into a Sales_item object and writes that Sales_item back onto the standard output	
 *
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 20th of June 2023
 */

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book;

    std::cin >> book;
    std::cout << book << std::endl;

    return 0;
}
// INPUT
// 0-201-70353-X 4 24.99