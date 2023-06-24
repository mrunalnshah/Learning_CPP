/*
 * DESC :
 * Exercise Section 2.2.1
 * Exercise : 2.9	
 * 
 * Question : Explain the following definitions. For those that are illegal, explain what’s wrong and how to correct it. 
				(a) std::cin >> int input_value;
				(b) int i = { 3.14 };
				(c) double salary = wage = 9999.99;
				(d) int i = 3.14;
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 24th of June 2023
 */

#include <iostream>

int main() {
   // std::cin >> int input_value;
   /*
    The code you provided is incorrect. When using the std::cin object to read input and store it in a
    variable, you should separate the variable declaration from the input operation.
    */
   int input_value;
   std::cin >> input_value;

   // int i = {3.14};
   /*
   The code you provided attempts to initialize an integer variable i with a floating-point value 3.14.
    In C++, this is considered a narrowing conversion because it involves losing precision.
    When using brace initialization (list initialization) with narrowing conversions, the compiler
    will raise an error. However, if you explicitly want to perform this conversion and accept the
    loss of precision, you can use regular parentheses for initialization.
   */
   //int i = (3.13); // --> correct
    int i(3.14);

   // double salary = wage = 9999.99;
   /*
   To initialize multiple variables with the same value, you need to declare each variable
    separately and assign the value individually.
    */
   double salary = 9999.99;
   double wage = salary;


   // int i = 3.14;
   /*i is used above so cannot be reused. but if i make it i2*/
   // int i2 = 3.14;
   // then also it is not a valid data type used.

   float i2 = 3.14;
   //double i2 = 3.14; // --> correct
}