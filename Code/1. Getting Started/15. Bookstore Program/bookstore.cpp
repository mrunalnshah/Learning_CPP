/*
 * DESC : We need to read a file of sales transactions and produce a report that shows, for each book, the total number
		  of copies sold, the total revenue, and the average sales price. We’ll assume that all the transactions for each ISBN are grouped together in the input.
          Our program will combine the data for each ISBN in a variable named total. We’ll use a second variable named trans to hold each transaction we read. If trans and
          total refer to the same ISBN , we’ll update total. Otherwise we’ll print total and reset it using the transaction we just read:
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 20th of June 2023
 *
*/


#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total;

    if(std::cin >> total) {
        Sales_item trans;

        while(std::cin >> trans) {
            if(total.isbn() == trans.isbn()) {
                total += trans;
            }else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }else {
        std::cerr << "No Data?!" << std::endl;
        return -1;
    }
    return 0;
}