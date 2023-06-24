/*
 * DESC :
 * Exercise Section 2.2.1
 * Exercise : 2.10	
 *
 * Question : What are the initial values, if any, of each of the following variables?
				std::string global_str;
				int global_int;
				
				int main() { 
					int local_int;
					std::string local_str;
				}
				
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 24th of June 2023
 */

#include <iostream>

std::string global_str;
int global_int;

int main() {
    int local_int;
    std::string local_str;

    std::cout << "std::string global_str; : " << global_str << std::endl; // empty
    std::cout << "int global_int; : " << global_int << std::endl;        // 0

    std::cout << "int local_int; : " << local_int << std::endl;          // garbage
    std::cout << "std::string local_str; : " << local_str << std::endl;  // empty

    return 0;
}