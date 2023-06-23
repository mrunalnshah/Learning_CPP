/*
 * DESC : Literals ( Strings, Single character, escape Sequence, bools, ...)
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 23th of June 2023
 */

#include <iostream>

int main() {
    int number1 = 20; // Decimal
    std::cout << "int number = 20 : " << number1 << std::endl;

    number1 = 024; // Octal
    std::cout << "number = 024 : " << number1 << std::endl;

    number1 = 0x14; // Hexadecimal
    std::cout << "number = 0x14 : " << number1 << std::endl;

    float number2= 3.14159;
    std::cout << "number = 3.14159 : " << number2 << std::endl;

    number2= 3.14159E0;
    std::cout << "number = 3.14159E0 : " << number2 << std::endl;
    /*Floating-point literals include either a decimal point or an exponent specified using
scientific notation. Using scientific notation, the exponent is indicated by either E or e:*/


   /* A character enclosed within single quotes is a literal of type char. Zero or more
    characters enclosed in double quotation marks is a string literal */

   char char_literal = 'a';
   std::cout << char_literal << std::endl;

   char string_literal[] = "Hello World!";
   std::cout << string_literal << std::endl;

   std::cout << "a really, really long string literal " "that spans two lines" << std::endl;


   // Escape Sequence
   std::cout << '\n'; // print a newline
   std::cout << "\tHi\n"; // prints a tab followed by "Hi" and a newline

   std::cout << std::endl;

   std::cout << '\a' << std::endl;    // alert
   std::cout << '\7' << std::endl;    // bell
   std::cout << '\12' << std::endl;   // newline
   std::cout << '\40' << std::endl;   // blank
   std::cout << '\0' << std::endl;    // null
   std::cout << '\115' << std::endl;  // 'M'
   std::cout << '\x4d' << std::endl;  // 'M'

    std::cout <<  "Hi \x4dO\115!\n"; // prints Hi MOM! followed by a newline
    std::cout << '\115' << '\n';     // prints M followed by a newline
    /* Note that if a \ is followed by more than three octal digits, only the first three are
       associated with the \. */

    //Specifying the Type of a Literal
    std::cout << L'a' << std::endl; // wide character literal, type is wchar_t
    std::cout << u8"hi!" << std::endl; // utf-8 string literal (utf-8 encodes a Unicode character in 8 bits)
    std::cout << 42ULL << std::endl; // unsigned integer literal, type is unsigned long long
    std::cout << 1E-3F << std::endl; // single-precision floating-point literal, type is float
    std::cout << 3.14159L << std::endl; // extended-precision floating-point literal, type is long double

    /*
     If the suffix contains a U, then the literal has an unsigned type, so a decimal, octal, or
     hexadecimal literal with a U suffix has the smallest type of unsigned int, unsigned long, or unsigned long long in
     which the literal’s value fits. If the suffix contains an L, then the literal’s type will be at least long; if the suffix
     contains LL, then the literal’s type will be either long long or unsigned long long. We can combine U with either
     L or LL. For example, a literal with a suffix of UL will be either unsigned long or unsigned long long,
     depending on whether its value fits in unsigned long.
     */

    // Boolean and Pointer Literals
    //The words true and false are literals of type bool

    bool test = false; //FALSE != false
    std::cout << "bool : " << test << std::endl;


    // The word nullptr is a pointer literal.

    return 0;
}