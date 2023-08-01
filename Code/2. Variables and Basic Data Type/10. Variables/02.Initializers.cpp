/*
	DESC : Initializating a Variable 

	BY   : MRUNAL NIRAJKUMAR SHAH
	ON   : 24th June 2023
*/

#include <iostream>
#include "Sales_item.h"

double applyDiscount(double price, double discount); // if commented, salePrice cannot be initialized.

int main() {
    // ok: price is defined and initialized before it is used to initialize discount
    double price = 109.99, discount = price * 0.16;

    // ok: call applyDiscount and use the return value to initialize salePrice
    double salePrice = applyDiscount(price, discount);


    /*
     Initialization is not assignment. Initialization happens when a variable is given
     a value when it is created. Assignment obliterates an object’s current value
     and replaces that value with a new one.
     */


    // we can use any of the following four different ways to define an int variable named units_sold
    // and initialize it to 0.

     int units_sold = 0;
    // int units_sold = {0};
    // int units_sold{0};
    // int units_sold(0);
    /*
    The generalized use of curly braces for initialization was introduced as part of the
    new standard. This form of initialization previously had been allowed only in more
    restricted ways. form of initialization is referred to as list initialization. Braced lists
    of initializers can now be used whenever we initialize an object and in some cases when
    we assign a new value to an object.

    When used with variables of built-in type, this form of initialization has one
    important property: The compiler will not let us list initialize variables of built-in type if
    the initializer might lead to the loss of information.
    */

    long double ld = 3.1415926536;
    int a{ld}, b{ld}; // error : narrowing conversion required
    int c(ld), d = ld; // ok : but value will be truncated
	/*
    The compiler rejects the initializations of a and b because using a long double to
    initialize an int is likely to lose data. At a minimum, the fractional part of ld will be
    truncated. In addition, the integer part in ld might be too large to fit in an int
    */
    std::cout << "c(ld) : " << c << std::endl;
    std::cout << "d = ld : " << d << std::endl;


    // Default Initialization
    /*
     How objects are initialized when no explicit initializer is
     given. How class type objects are initialized is controlled by the class. Objects of
     built-in type defined at global scope are initialized to 0; those defined at local
     scope are uninitialized and have undefined values.
     */

    std::string empty; // empty implicitly initialized to the empty string
    Sales_item item; // default-initialized Sales_item object

    std::cout << " std::string empty; : "<< empty << std::endl; // empty
    std::cout << " Sales_item item; : "<< item << std::endl;   // 0 0 0 --> initialized in class

    /*Some classes require that every object be explicitly initialized. The compiler will
complain if we try to create an object of such a class with no initializer.

     Uninitialized objects of built-in type defined inside a function body have
undefined value. Objects of class type that we do not explicitly initialize have
a value that is defined by the class.*/

    return 0;
}

double applyDiscount(double price, double discount) {
    double SalePrice;

    SalePrice = price * discount;
    return SalePrice;
}