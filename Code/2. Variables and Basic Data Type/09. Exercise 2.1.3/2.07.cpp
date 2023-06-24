/*
 * DESC :
 * Exercise Section 2.1.3
 * Exercise : 2.7	
 *
 * Question : What values do these literals represent? What type does each have?
				(a) "Who goes with F\145rgus?\012"
				(b) 3.14e1L
				(c) 1024f
				(d) 3.14L
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 23th of June 2023
 */

#include <iostream>

int main() {

    std::cout << "Who goes with F\145rgus?\012" << std::endl;
    std::cout << 3.14e1L << std::endl;
    std::cout << 1024.f << std::endl;
    std::cout << 3.14L << std::endl;

    return 0;
}