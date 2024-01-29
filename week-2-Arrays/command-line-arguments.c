//Practice command-line arguments
/*
you pass strings in the command line instead of passing in the code structure
Given a name as a set of command line arguments, print initials of that name to the terminal.
e.g ./filename Carter Zenke
    argv[0]->  ./filename
    argv[1]-> Carter
        argv[1][0]-> C
    argv[2]-> Zenke
        argv[2][1]->e

test case-> if typed-> ./filename Carter Zenke
        output should be-> C Z
*/

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]){
    /*
    int argc is argument count-how many arguments are in the argv[] array.
    e.g ./filename Carter Zenke, there are 2 arguments
    string argv is an array of strings- represent the text/argument we give to our program in the command line
    e.g ./filename Carter Zenke,
    argv[0] -> "./filename" (the name of the executable)
    argv[1] -> "Carter"
    argv[2] -> "Zenke" 
    
    */

   //go through every element in argv array
    for(int i=0; i<argc; i++){
        printf("%c %c\n", argv[1][0], argv[2][0]);  //%c is a placeholder for char, means print the result in type Char, %c %c cz we need two initails C from Carter and Z from Zenke
        //OR to print one by one
        //printf("%c\n", argv[1][0]);
        //printf("%c\n", argv[2][0]);
        //OR to print with description
        //printf("argv[%i] is %c\n", i, argv[1][0]);
        //printf("argv[%i] is %c\n", i, argv[2][0]);

        return 0;                    //to avoid printing the output again and again
    }
}
