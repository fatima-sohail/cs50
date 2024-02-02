//week 2, Arrays, Lab 2: Scrabble
//Task: Determine which of two scrabble words is worth more.

#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if(score1>score2){
        printf("Player 1 wins!\n");
    } else if(score1<score2){
        printf("Player 2 wins!\n");
    }else {
        printf("Tie\n");
    }

}

/* Inside the new function:
    1. characters other than letters are given 0 points
    2. uppercase and lowercase letters have same points
    3. loop through the given word, first find its length to go through each character in it.
        3.1. if the letters are uppercase:
                3.1.1 find the index of the current letter e.g D. How?
                        go to ASCII values of capital letters
                        go where the alphabets start - 'A'
                        ASCII value of 'A' = 65
                        any ASCII value of alphabet minus 65 gives us the INDEX of the current alphabet, 68-65= 3rd index
                        store it in a variable.
                3.1.2 get the score/point of that letter from points array. How?
                        we know that points[0] or points[1] represent 'A', 'B' respectively.
                        since we now know the index of the current letter, we can access its point in point array. e.g
                        points[3] holds the point at 3rd index , which is 2.
                3.1.3 sum all the scores up. How?
                        this point is then added to the sum variable to calculate the total score
                        of the given word.
                3.3.4 return the total sum of the word
    4. if the letters are lowercase:
            follow similar procedure, ASCII values will be different now

    5. else, assign zero points to the non-alphabetic characters
    6. Go back to main void function and print the winner. How?
        6.1 if score1 is more than score2, player1 wins
        6.2 if score2 is more than score1, player2 wins
        6.3 else, its a tie.
                remember! score1 represents player1's score
    */

int compute_score(string word)
{
    // TODO: Compute and return score for string

    int word_length = strlen(word);  //get the length of the string

    int sum = 0;   //initalize sum outside the loop to accumulate the score
   for(int i=0; i<word_length; i++){

        int character_index;
        int character_score;

        if(isupper(word[i])){
            character_index = word[i] - 65;           //get the index of the character using ASCII values
            character_score = POINTS[character_index]; //get the score or point of that character from POINTS array
        } else if(islower(word[i])){
            character_index = word[i] - 97;
            character_score = POINTS[character_index];
        } else {
            character_score = 0;                      //all the non-alphabets characters are assinged zero points
        }
        sum = sum + character_score;                 //add the score of the letter to the total sum
    }
    return sum;                                        //return the total sum/score of the word
}
