/*
 * DESC : program to count how many consecutive times each distinct value appears in the input	
 *
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 20th of June 2023
 */

#include <iostream>

int main() {
    int currentValue = 0, value = 0;

    std::cout << "Enter a Integer : (enter any char to terminate) :" << std::endl;

    if(std::cin >> currentValue) {
        int count = 1;
        while(std::cin >> value) {
            if(currentValue == value) {
                ++count;
            } else {
                std::cout << currentValue << " occurs " << count << (count > 1 ? " times." : " time.") << std::endl;
                currentValue = value;
                count = 1;
            }
        }
        std::cout << currentValue << " occurs " << count << (count > 1 ? " times." : " time.") << std::endl;    }
    return 0;
}