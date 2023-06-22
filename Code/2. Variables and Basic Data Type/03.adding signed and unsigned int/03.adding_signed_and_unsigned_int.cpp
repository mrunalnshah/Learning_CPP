/*
	DESC : Add unsigned and signed , and signed and signed 

	BY   : MRUNAL NIRAJKUMAR SHAH
	ON   : 22th June 2023
*/

#include <iostream>

int main() {
    unsigned u = 10;
    int i = -42;

    std::cout << "i + i : " << i + i << std::endl;
    std::cout << "i + u : " << i + u << std::endl;

    return 0;
}

/*
RESULT :
i + i : -84
i + u : 4294967264

In the first expression, we add two (negative) int values and obtain the expected
result. In the second expression, the int value -42 is converted to unsigned before
the addition is done. Converting a negative number to unsigned behaves exactly as
if we had attempted to assign that negative value to an unsigned object. The value
“wraps around” as described above.


*/