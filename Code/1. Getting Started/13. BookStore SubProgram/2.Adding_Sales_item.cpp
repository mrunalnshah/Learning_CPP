/*
 * DESC : adds two Sales_item objects	
 *
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 20th of June 2023
 */

#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item1, item2;

    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;

    return 0;
}
// INPUT
/*
0-201-78345-X 3 20.00
0-201-78345-X 2 25.00
 */