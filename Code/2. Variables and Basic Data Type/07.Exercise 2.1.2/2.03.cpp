/*
 * DESC :
 * Exercise Section 2.1.3
 * Exercise : 2.3	
 *
 * Question : What output will the following code produce?
 
				unsigned u = 10, u2 = 42;
				std::cout << u2 - u << std::endl;
				std::cout << u - u2 << std::endl;
				
				int i = 10, i2 = 42;
				std::cout << i2 - i << std::endl;
				std::cout << i - i2 << std::endl;
				std::cout << i - u << std::endl;
				std::cout << u - i << std::endl;
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 22th of June 2023
 */

#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // OUTPUT : 32
    std::cout << u - u2 << std::endl; // OUTPUT : UNDEFINED (4294967264)
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // OUTPUT : 32
    std::cout << i - i2 << std::endl; // OUTPUT : -32
    std::cout << i - u << std::endl;  // OUTPUT : 0
    std::cout << u - i << std::endl;  // OUTPUT : 0
}