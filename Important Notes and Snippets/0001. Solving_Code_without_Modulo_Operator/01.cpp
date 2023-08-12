#include <iostream>
using namespace std;

int getRemainder(int number, int divisor) {
	return (number - divisor * (number / divisor));
}

int main() {
	cout << getRemainder(100, 7);
	return 0;
}

/*
Time Complexity: O(1) 
Auxiliary Space: O(1)
*/