#include <iostream>

int main() {
	short int a1;
	int a2;
	long int a3;
	long long int a4;

	char b1;
	wchar_t b2;
	//char8_t b3; //C++20
	char16_t b4;
	char32_t b5;

	std::string b6;

	/*
	Many of the types defined in newer versions of C++ (e.g. std::nullptr_t) use a _t suffix. 
	This suffix means “type”, and it’s a common nomenclature applied to modern types.

	If you see something with a _t suffix, it’s probably a type. But many types don’t have a _t suffix, so this isn’t consistently applied.
	*/

	bool c;

	float d1;
	double d2;
	long double d3;

	//void e;

	std::nullptr_t f;

	/*
	Many of the types defined in newer versions of C++ (e.g. std::nullptr_t) use a _t suffix. 
	This suffix means “type”, and it’s a common nomenclature applied to modern types.

	The terms integer and integral are similar, but sometimes have different meanings.
	In mathematics, an integer is a number with no decimal or fractional part, including negative and positive numbers and zero.

	In C++, the term integer is most often used to refer to the int data type, which holds integer values. 
	However, it is also sometimes used to refer to the broader set of data types that are commonly used to store and display integer values.
	This includes short, int, long, long long, and their signed and unsigned variants. 
	
	The term integral means “like an integer”. Most often, integral is used as part of the term “integral type”, 
	which includes the broader set of types that are stored in memory as integers, even though their behaviors might 
	vary (which we’ll see later in this chapter when we talk about the character types). This includes bool, the integer types, 
	and all the various character types.

	Most modern programming languages include a fundamental string type 
	(strings are a data type that lets us hold a sequence of characters, typically used to represent text).
	In C++, strings aren’t a fundamental type (they’re a compound type). But because basic string usage is straightforward and 
	useful, we’ll introduce strings in this chapter as well (in lesson 4.17 -- Introduction to std::string).
	*/
	
	std::cout << sizeof(a1) << std::endl;
	std::cout << sizeof(a2) << std::endl;
	std::cout << sizeof(a3) << std::endl;
	std::cout << sizeof(a4) << std::endl;

	std::cout << sizeof(b1) << std::endl;
	std::cout << sizeof(b2) << std::endl;
	//std::cout << sizeof(b3) << std::endl;
	std::cout << sizeof(b4) << std::endl;
	std::cout << sizeof(b5) << std::endl;
	std::cout << sizeof(b6) << std::endl;

	std::cout << sizeof(c) << std::endl;

	std::cout << sizeof(d1) << std::endl;
	std::cout << sizeof(d2) << std::endl;
	std::cout << sizeof(d3) << std::endl;

	//std::cout << sizeof(e) << std::endl;

	std::cout << sizeof(f) << std::endl;



	return 0;
}