/*
 * DESC :
 * Exercise Section 1.3
 * Exercise : 1.7
 *
 * Question : Compile a program that has incorrectly nested comments.
 *
 * BY   : Mrunal Nirajkumar Shah
 * ON   : 19th of June 2023
 */

#include <iostream>

int main() {

    /*Mrunal Shah
     * /* Hello Friend */
    i am your friend
    */

    /*
    error: 'i' was not declared in this scope
    22 |     i am your friend
       |     ^
    ninja: build stopped: subcommand failed.
     */
    return 0;
}
