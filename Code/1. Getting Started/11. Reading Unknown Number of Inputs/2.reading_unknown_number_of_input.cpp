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
    while (true) {
        if(!(std::cin >> value)) {
            std::cout << "Invalid Input... Terminating The Loop." << std::endl;
            break;
        }
        if(value == 0) {
            std::cout << "Sum is " << sum << std::endl;
            break;
        }
        sum = sum + value;
    }
    return 0;
}