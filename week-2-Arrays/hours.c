//practice problems
/*
In this program, you’ll complete a function that calculates, based on a user’s input,
a total number of hours or an average number of hours across a given number of days.
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

    printf("%.1f hours\n", calc_hours(hours, weeks, output));
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    //add up num of hours stored in the array, save it in a new variable
    float totalHours = 0;
    for(int i=0; i<weeks; i++){
        totalHours = totalHours + hours[i];
    }

    //find average num of hours in given num of weeks
    float averageHours = totalHours/weeks;


    if(output == 'T'){
        return totalHours;
    }else if(output == 'A'){
        return averageHours;
    }else {
        return -1;
    }

}
