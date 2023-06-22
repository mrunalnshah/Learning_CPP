/*
	DESC : for loop error for unsigned print 10 to 0; 

	BY   : MRUNAL NIRAJKUMAR SHAH
	ON   : 22th June 2023
*/
#include <iostream>

int main() {
    for(unsigned u = 10; u >= 0 ; --u) {
        std::cout << u << std::endl;
    }

    return 0;
}

/*
We might think we could rewrite this loop using an unsigned. After all, we don’t plan
to print negative numbers. However, this simple change in type means that our loop
will never terminate.

Consider what happens when u is 0. On that iteration, we’ll print 0 and then execute
the expression in the for loop. That expression, --u, subtracts 1 from u. That result,
-1, won’t fit in an unsigned value. As with any other out-of-range value, -1 will be
transformed to an unsigned value. Assuming 32-bit ints, the result of --u, when u
is 0, is 4294967295.
*/

/*
// Working and logical for above error code
#include <iostream>

int main() {
    for(unsigned u = 10; u >= 0 && u != -1 ; --u) {
        std::cout << u << std::endl;
    }

    return 0;
}

*/
