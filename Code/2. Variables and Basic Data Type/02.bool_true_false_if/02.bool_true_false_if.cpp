/*
	DESC : Check on if statement with bool condition with int type; change int i to 0 and see how many times it runs. 

	BY   : MRUNAL NIRAJKUMAR SHAH
	ON   : 22th June 2023
*/

#include <iostream>

int main() {
    int i = 42;

/*
If the value is 0, then the condition is false; all other (nonzero) values yield true. 

By the same token, when we use a bool in an arithmetic expression, its value
always converts to either 0 or 1. As a result, using a bool in an arithmetic expression
is almost surely incorrect.
*/
    if(i){
        int count = 1;
        std::cout << "Loop : " << count << "\tValue : " << i << std::endl;
        i = 0;
    }

    return 0;
}