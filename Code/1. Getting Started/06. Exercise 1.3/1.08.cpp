/*
 * DESC :
 * Exercise Section 1.3
 * Exercise : 1.8
 *
 * Question : //Indicate which, if any, of the following output statements are legal:
              //std::cout << "/*";
              //std::cout << "*///";
              //std::cout << /* "*/" */;
              //std::cout << /* "*/" /* "/*" */;
            //After you’ve predicted what will happen, test your answers by compiling a
            //program with each of these statements. Correct any errors you encounter.
 /*
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 19th of June 2023
 */

#include <iostream>

int main() {
    std::cout << "/*"; //correct
    std::cout << "*/"; //correct

    //std::cout << /* "*/" */; its not correct because there is no stream to cout
    std::cout << "*/";

    std::cout << /* "*/" /* "/*" */; // correct

}
