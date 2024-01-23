/*problem set 1
Make a pyramid like this.
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
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



    //build left aligned pyramid first


    for(int i=0; i<height; i++){
        for(int j=height-i; j>1; j--){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("#");
        }

    printf("\n");              //exit the line after a certain value to make it a column or square/rectangle shape
    };

    //to make right aligned pyramid:
    //decrease the dots as you go down, increasing the "#"
    //reverse the method used to print "#".

    // for(int i=height; i>0; i--){

    //     for(int j=i; j>0; j--){
    //         printf(".");
    //     }
    // printf("\n");              //exit the line after a certain value to make it a column or square/rectangle shape
    // };
}

