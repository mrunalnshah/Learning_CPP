/*
	DESC : Assign one Data Type to other and see the result.

	BY   : MRUNAL NIRAJKUMAR SHAH
	ON   : 22th June 2023
*/


#include <iostream>

int main() {
    bool b = 42;
    std::cout << "bool b = 42: " << b << std::endl;
    int i = b;
    std::cout << "int i = b : " << i << std::endl;
    i = 3.14;
    std::cout << "i = 3.14 : " << i << std::endl;
    double pi = i;
    std::cout << "double pi = i : " << pi << std::endl;
    unsigned char c1 = -1;
    std::cout << "unsigned char c = -1 : " << c1 << std::endl;
    signed char c2 = 256;
    std::cout << "signed char c2 = 256 : " << c2 << std::endl;

    return 0;
}