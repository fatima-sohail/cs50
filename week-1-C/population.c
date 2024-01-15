//lab 1
/*
Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.
For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas
would be born and 1200 / 4 = 300 llamas would pass away. At the end of that year, we would have
1200 + 400 - 300 = 1300 llamas.
To try another example, if we were to start with n = 1000 llamas, at the end of the year, we would have
1000 / 3 = 333.33 new llamas. We can’t have a decimal portion of a llama, though, so we’ll truncate the
decimal to get 333 new llamas born. 1000 / 4 = 250 llamas will pass away, so we’ll end up with a total
of 1000 + 333 - 250 = 1083 llamas at the end of the year.*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int start;                          //declare the variable

    for(; ;){                           //(; ;) refers to infinte loop until the break condition is met
        start = get_int("Start size: "); //prompting user to add a start value
        if(start >=9){                  //check if the added value is = or greater than 9
            break;                      // exit the loop if condition is met
        }
    }
    /* Or try do-while loop
    do
    {
         start = get_int("Start size: ");
    }
    while (start < 9);
    */

    // TODO: Prompt for end size
    int end;
    for(; ;){                         //(; ;) refers to infinte loop until the break condition is met
        end = get_int("End size: ");  //prompting user to enter the end value
        if(end >= start){             //check if the added value is = or greater than start value
            break;                    //exit the loop if the condition is met
        }
    }

    /* or try do-while loop
    do
    {
      end = get_int("End size: ");
    }
    while (end < start);
     */

    // TODO: Calculate number of years until we reach threshold
    int years;

    for(years=0; start<end; years++){         //loop through the years as long as 'start value' is less than the 'end value'

     start = start + (start/3) - (start/4);
    }

    // TODO: Print number of years
     printf("Years: %i\n", years);     //number 0f years required to reach the end size
}
