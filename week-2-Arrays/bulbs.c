//convert a string prompt to binary numbers, 0 for black bulb, 1 for yellow bulb

#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string input_message = get_string("Type a message: ");
    int message_length = strlen(input_message);

    for (int i = 0; i < message_length; i++)
    {
        char current_char = input_message[i];
        int ascii_val = current_char;  // Get the ASCII value directly

        int binary[8] = {0};

        for (int k = 7; k >= 0; k--)  //k is the start index,
                                      //loop starts from right to left, its complicated-refer to OneNote>cs50>bulbs
        {
            binary[k] = ascii_val % 2; // Calculate the binary digits
            ascii_val /= 2;
        }

        for (int m = 0; m < 8; m++)
        {
            print_bulb(binary[m]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}



//This one works too, but its complicated
/** 
#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    /*
    1. turn given text into decimal
    2. turn decimal into binary
       that will give binary nums from left to right instead of other way around
       2.1 to reverse the the array:
       2.2 make another array and put binary nums in it in such a way that with each
           binary num in prev. array gone, the new array gets filled from left to right.
    3. these binary nums will act as instructions for the light bulbs on stage to turn on(1) and turn off(0)
    //
    string input_message = get_string("Type a message: ");
    int message_length = strlen(input_message);

     for(int i = 0; i < message_length; i++) {
        char current_char = input_message[i];
        int ascii_val = current_char;  //get the ascii value for current character in the text
        // printf("%i\n", asciiVal);

        int rmdrs[8] = {0};
        int counter = 0;


        while(ascii_val != 0){
            int remainder = ascii_val %2;
            ascii_val = ascii_val / 2;  //get binary value for current character in the text
            //printf("%i", remainder);
            rmdrs[counter] = remainder;
            counter++;
        }


        int binary[8] = {0};

        int startIndex = 7 - counter;
        for(int k = startIndex; k < 8; k++) {
            int rem = rmdrs[counter];
            binary[k] = rem;
            counter--;
        }

        for(int m = 0; m < 8; m++) {
            print_bulb(binary[m]);
        }
        printf("\n");
    }

}



void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}


