//practice problems
// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value
/*
Suppose you are eating out at a restaurant with a friend and want to split the bill evenly.
You may want to anticipate the amount you’ll owe before the bill arrives with tax added. In
this problem, you’ll complete a function to calculate the amount each of you owes based on
the bill amount, the tax, and the tip.*/

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    //convert tax percentage into tax decimal
    float tax_amount = bill *(tax/100.0);    //(100.0) and not (100) to get the correct output.
    //add that tax to the bill
    bill = bill + tax_amount;
    //calculate tip based on the percentage
    float tip_amount = bill * (tip/100.0);    //(100.0) and not (100) to get the correct output.
    //calculate total amount including tip
    float total_amount = bill + tip_amount;

    //return half of the total amount
    return total_amount/2;
}
