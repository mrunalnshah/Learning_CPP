#include <iostream>
using namespace std;

int getRemainder(int num, int divisor) {
	if (divisor == 0) {
		cout << "Error: divisor can't be zero \n";
		return -1;
	}

	if (divisor < 0) 
		divisor = -divisor;
	if (num < 0)
		num = -num;

	int i = 1;
	int product = 0;
	while (product <= num) {
		product = divisor * i;
		i++;
	}

	return num - (product - divisor);
}

int main() {
	cout << getRemainder(100, 7);
	return 0;
}

/*
Time Complexity: O(n) 
Auxiliary Space: O(1)
*/