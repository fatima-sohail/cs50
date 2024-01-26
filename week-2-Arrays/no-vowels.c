//practice problems
// Write a function to replace vowels with numbers, leetspeak method
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string input_word);

int main(int argc, string argv[])
{

    /*
    1. your program must accept single command-line argument
    2. print error message  if program is executed without command line argument
    3. print error message if there is more than one command-line argument
    4. return a value of 1 - signifies an error
    */

   if(argc != 2){
    printf("Error, write single word");
    return 1;
   }

    /*
    1. how to print the converted word?
        1.1 inside printf call the replace function you just wrote
            1.1.1 replace func takes in param input argv[1] as mentioned in the cs50 implementation guide
            1.1.2 must note!! this param is different from param of replace func's param in line 34          */

    printf("%s\n", replace(argv[1]));
}

 string replace(string input_word){
    /*
    1. how can I go through each charater in the string array?
            1.1find the lenghth of the string first
            1.2use loop to go through each character
    2. how to replace each vowel with a num?two ways:
             use if else or switch statement
            2.1->if else statement:
                     ->if alphabet at current index is a, replace it with 6
                     ->replace e, i, o with 3, 1, 0

                     BUTT
            2.2->there is a logical bug in the program.
                    why? we are replacing a char with a num. miss matched types
                ->How to fix it? Two ways:
                        -> '6' instead of 6 -> '' converts nums to characters. OR
                        -> replace the nums with their ASCII values in digits.
                             ->replace 6, 3, 1, 0 with 54, 51, 49, 48
                                                                                                    */


    int word_length = strlen(input_word);

    for(int i=0; i<word_length; i++){

    if(input_word[i] == 'a'){
        input_word[i] = '6';
    }else if(input_word[i] == 'e'){
        input_word[i] = '3';
    }else if(input_word[i] == 'i'){
        input_word[i] = '1';
    }else if(input_word[i] == 'o'){
        input_word[i] = '0';
    }
        //else { ----}
        //we arent using else as we don't want the string to be adjusted
    }
     return input_word;
        }


/*
Inside the for loop, replace if else with switch statement:-

    switch(input_word[i]){
            case 'a':
            input_word[i] = '6';  //ascii value of 6
            break;

            case 'e':
            input_word[i] = '3';   //ascii value of 3
            break;

            case 'i':
            input_word[i] = '1';     //ascii value of 1
            break;

            case 'o':
            input_word[i] = '0';     //ascii value of 0
            break;

            // default:
            // printf("Error!");
            //don't want string to be adjusted, so no default
    }

    */




