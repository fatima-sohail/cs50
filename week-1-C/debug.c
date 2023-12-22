//practice problems
// Become familiar wih C syntax
// Learn to debug buggy code

/*
Prime numbers are defined as whole numbers greater than 1, whose only factors are 1 and
itself. So 3 is prime because its only factors are 1 and 3, while 4 is composite and not
prime, because it is the product of 2 × 2. In this lab you will write an algorithm to
generate all prime numbers in a range specified by the user.*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask for your name and where live
    string name = get_string("What is your name? ");
    string location = get_string("Where do you live? ");

    // Say hello
    printf("Hello, %s, from %s!\n", name, location);
}
