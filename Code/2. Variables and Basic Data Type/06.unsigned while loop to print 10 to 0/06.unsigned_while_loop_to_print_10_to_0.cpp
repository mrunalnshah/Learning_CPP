/*
	DESC : While loop for unsigned print 10 to 0; 

	BY   : MRUNAL NIRAJKUMAR SHAH
	ON   : 22th June 2023
*/

#include <iostream>

int main() {
    /*
    unsigned u = 10;
    while (u >= 0) {
        --u;
        std::cout << u << std::endl;
    }
    //same as error done in for loop in previous 05 
    */


    unsigned u = 11;
    while (u > 0) {
        --u;
        std::cout << u << std::endl;
    }
}

// more polite
/*
#include <iostream>

int main() {
    unsigned u = 10;
    while (u >= 0) {
        std::cout << u << std::endl;
        --u;
        if(u == -1) {
            break;
        }
    }

    return 0;
}
*/