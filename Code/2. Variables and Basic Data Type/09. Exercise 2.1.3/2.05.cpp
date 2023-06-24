/*
 * DESC :
 * Exercise Section 2.1.3
 * Exercise : 2.5	
 *
 * Question : Determine the type of each of the following literals. Explain
			  the differences among the literals in each of the four examples:
				(a) 'a', L'a', "a", L"a"
				(b) 10, 10u, 10L, 10uL, 012, 0xC
				(c) 3.14, 3.14f, 3.14L
				(d) 10, 10u, 10., 10e-2
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 23th of June 2023
 */

#include <iostream>

int main() {
    std::cout << "'a' : "  << 'a' << std::endl;
    std::cout << "L'a' : "  << L'a' << std::endl;
    std::cout << "\"a\" : "  << "a" << std::endl;
    std::cout << "L\"a\" : "  << L"a" << std::endl;
    /*
     OUTPUT :
    'a' : a
     L'a' : 97
     "a" : a
     L"a" : 0x7ff7a4ef5020
    */
    std::cout << "10 : "  << 10 << std::endl;
    std::cout << "10u : "  << 10u << std::endl;
    std::cout << "10L : "  << 10L << std::endl;
    std::cout << "10uL : "  << 10uL << std::endl;
    std::cout << "012 : "  << 012 << std::endl;
    std::cout << "0xC : "  << 0xC << std::endl;

/*
 OUTPUT :
    10 : 10
    10u : 10
    10L : 10
    10uL : 10
    012 : 10
    0xC : 12
*/

    std::cout << "3.14 : "  << 3.14 << std::endl;
    std::cout << "3.14f : "  << 3.14f << std::endl;
    std::cout << "3.14L : "  << 3.14L << std::endl;
    /*
     OUTPUT :
     3.14 : 3.14
     3.14f : 3.14
     3.14L : 3.14
    */

    std::cout << "10 : "  << 10 << std::endl;
    std::cout << "10u : "  << 10u << std::endl;
    std::cout << "10. : "  << 10. << std::endl;
    std::cout << "10e-2 : "  << 10e-2 << std::endl;

    /*
     OUTPUT :
     10 : 10
     10u : 10
     10. : 10
     10e-2 : 0.1
     */

    return 0;
}