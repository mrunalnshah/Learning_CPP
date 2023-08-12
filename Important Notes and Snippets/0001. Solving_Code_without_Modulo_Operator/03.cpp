#include <iostream>
using namespace std;

int getRemainder(int num, int divisor) {
	while (num >= divisor)
		num -= divisor;

	return num;
}

int main() {
	int num = 100, divisor = 7;
	cout << getRemainder(num, divisor);

	return 0;
}

/*
Time Complexity: O(n) 
Auxiliary Space: O(1)
*/