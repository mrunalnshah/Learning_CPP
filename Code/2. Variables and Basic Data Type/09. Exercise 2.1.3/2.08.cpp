/*
 * DESC :
 * Exercise Section 2.1.3
 * Exercise : 2.8	
 *
 * Question : Using escape sequences, write a program to print 2M followed by a newline. 
				Modify the program to print 2, then a tab, then an M, followed by a newline.
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 23th of June 2023
 */

#include <iostream>

int main() {

    // \062 --> 2
    // \115 --> M
    
    std::cout << "\062\115\012";
    std::cout << "\062\t\115\012";

    return 0;
}