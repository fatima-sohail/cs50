//problem set 1
/*
When making change, odds are you want to minimize the number of coins you’re dispensing for each customer,
lest you run out (or annoy the customer!). Fortunately, computer science has given cashiers everywhere ways
to minimize numbers of coins due: greedy algorithms. if you prompt user to give you a number, output should be
in a way to minimize the num of coins. e.g
If you input -1, does your program prompts you again?
If you input 0, does your program output 0?
If you input 1, does your program output 1 (i.e., one penny)?
If you input 4, does your program output 4 (i.e., four pennies)?
If you input 5, does your program output 1 (i.e., one nickel)?
If you input 24, does your program output 6 (i.e., two dimes and four pennies)?
If you input 25, does your program output 1 (i.e., one quarter)?
If you input 26, does your program output 2 (i.e., one quarter and one penny)?
*/

#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents;
    for (;;)
    {
        cents = get_int("Cents: ");
        if (cents >= 0)
        {
            break; // Break the loop if a non-negative integer is entered
        }else{
        printf("Please enter a non-negative integer.\n");
        }
    }
    return cents;

}

int calculate_quarters(int cents)
{
    // TODO

    return cents/25;
}

int calculate_dimes(int cents)
{
    // TODO
    return cents/10;
}

int calculate_nickels(int cents)
{
    // TODO
    return cents/5;
}

int calculate_pennies(int cents)
{
    // TODO
    return cents/1;
}
