//problemset 1
/*
Prime numbers are defined as whole numbers greater than 1, whose only factors are 1 and itself. So 3 is prime
because its only factors are 1 and 3, while 4 is composite and not prime, because it is the product of 2 × 2.
In this lab you will write an algorithm to generate all prime numbers in a range specified by the user.*/

#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>


bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

//write an algorithm to generate all prime numbers in a range specified by the user
bool prime(int number)
{
    // TODO
    //number divisible by itself and 1
    for(int i=2; i<number; i++){       //i<number or 7 cz we want to start from 2 to 7 instead of 7 and above
        if(number%i==0){               //return false if remainder is zero/if its not a prime num
            return false;
        }
    }
    return true;  //if used inside the loop, it will go back/terminate after line 40, giving us few prime nums
}




