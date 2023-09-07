#include <iostream>

int main() {
	int example[5];
	int* ptr = example;

	*((int*) ((char*)ptr + 8)) = 5;

	std::cout << example[2] << std::endl;

}