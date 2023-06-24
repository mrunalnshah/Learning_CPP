/*
	DESC : Glimpse of Declaring Variables 

	BY   : MRUNAL NIRAJKUMAR SHAH
	ON   : 24th June 2023
*/

#include <iostream>
#include "Sales_item.h"

int main() {
    int sum = 0, value, units_sold = 50;
    // sum, value and units_sold have data type int
    // sum is initialized to 0, units_sold is initialized to 50 and value is not initialized

    Sales_item item; // item has type Sales_item

    // string is a library type, representing a variable-length sequence of characters
    std::string book("0-201-78345-X"); // book initialized from string literal


    std::cout << "sum : " << sum << std::endl; // sum is 0
    std::cout << "value : " << value << std::endl; // garbage values
    std::cout << "units_sold : " << units_sold << std::endl; // 50

    std::cout << "item : " << item << std::endl; // 0 0 0

    std::cout << "book : " << book << std::endl;// 0-201-78345-X




    return 0;
}