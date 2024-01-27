//week 2 Arrays Practice Problems
// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
//You are to complete the function, valid, which returns true if the password passes all criteria, and false if it does not.
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
/*
1. loop through each element in the password.
    1.1 check string length before looping--> import string.h library to make the method work
    1.2 Inside the loop,
        check if a current character is a lowercase, if that's true increment the lowercase
        use methods like tolower() from ctype.h library
    1.3 do the same for upper case, number and symbol.
    1.4 before checking, make sure to initialize counters for above characters before the loop.
2. Once we are out of the loop,
    2.1 check if there is atleast one of each type of character, return true if it is
    2.3 otherwise return false

*/
bool valid(string password)
{

    int lower_count = 0;
    int upper_count = 0;
    int num_count = 0;
    int symbol_count = 0;


    int pass_length = strlen(password);
    for(int i =0; i<pass_length; i++){
        //how can I pass islower() in the condition? e.g if an element at current index is lower case?
        if(islower(password[i])){
            lower_count = lower_count + 1;
        }
        if(isupper(password[i])){
            upper_count = upper_count + 1;
        }
        if(isdigit(password[i])){
            num_count = num_count + 1;
        }
        if(ispunct(password[i])){
            symbol_count = symbol_count + 1;
        }
    }
    if(lower_count != 0 && upper_count != 0 && num_count != 0 && symbol_count != 0){
        return true;
    }
    return false;
}
