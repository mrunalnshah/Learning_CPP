/*
 * DESC :
 * Exercise Section 1.2
 * Exercise : 1.6
 *
 * Question : Explain whether the following program fragment is legal.
 *          std::cout << "The sum of " << v1;
                      << " and " << v2;
                      << " is " << v1 + v2 << std::endl;
         If the program is legal, what does it do? If the program is not legal, why not? How would you fix it?
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 19th of June 2023
 */

#include <iostream>

int main() {
    int v1 = 10;
    int v2 = 20;
    /*
    std::cout << "The sum of " << v1; //correct and the std::cout ended with semicolon
              << " and " << v2;       // their is no ostream function
              << " is " << v1 + v2 << std::endl; //there is no ostream function
    */
    //correct version
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 + v2 << std::endl;
    
    return 0;
}