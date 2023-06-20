/*
 * DESC : Reading Unknown Number of Inputs using While Loop	
 *
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 20th of June 2023
 */

#include <iostream>

int main() {
    int sum = 0, value = 0;

    std::cout << "Enter Values to Sum : (0 to exit)" << std::endl;
    while (std::cin >> value){
        if(value == 0 ) {
            std::cout << "Sum is " << sum << std::endl;
            return 0;
        }
        sum = sum + value;
    }
    std::cout << "Invalid Input Found...Terminating the Loop and printing Sum." << std::endl;
    std::cout << "Sum is " << sum << std::endl;

    return 0;
}