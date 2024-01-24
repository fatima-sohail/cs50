/*problem set 1
Make two pyramids like this.
   #  #
  ##  ##
 ###  ###
####  ####
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt the user to get height
    //inbetween 1 and 8 inclusive

    int height;
    for(;;){
        height = get_int("Height:");
        if (height >= 1 && height <= 8){
            break;
        }
    }


     //prints "#" and "." according to their order in the code-top to bottom line after line
    //build left aligned pyramid first
    //add "." at the starting
    //add "." in the middle, .make sure its 2 at each line
    //build right aligned pyramid
    //replace "." with " "


    for(int i=0; i<height; i++){
        for(int j=height-i; j>1; j--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("#");
        }
        for(int j=0; j<=1; j++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("#");
        }
    printf("\n");              //exit the line after a certain value to make it a column or square/rectangle/pyramid shape
    };
}
