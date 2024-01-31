//program should count the number of letters, words and sentences in a given piece of text.
//grade the given text according to difficulty level e.g grade 3, grade 6, grade 12
//Coleman-Liau formula

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    //prompt a user for string
    string user_input = get_string("Type a text: ");

    //check num of letters
    //call count_letters function on text that is user_input
    //printf("%i letters\n", count_letters(user_input));

     //check num of words,
     //call count_words function on text that is user_input
    //printf("%i words\n", count_words(user_input));

    //check num of sentences
    //call count_sentences function on text that is user_input
    //printf("%i sentences\n", count_sentences(user_input));

    //use Coleman-Liau index to determine the grade level
    /*
    1. Use grade instead of index
    2. Use float instead of int to maintain the fraction part to get accurate results
            grade = 0.0588 * L - 0.296 * S - 15.8
        2.1 calculate L, S:
            store the functions in new variables: letters, words, sentences
            L = letters/words * 100
            S = sentences/words *100

    3. round up the grade so that digits after decimal are discarded, get round method
        from <math.h> lib
    4. printf on line 63 will give an error. why?
        it will ask to use %f not %i cz float grade, not int grade
        But we need an int output, what will you do?
        store rounded grade in an 'int' variable.

    */
   float letters = count_letters(user_input);
   float words = count_words(user_input);
   float sentences = count_sentences(user_input);

   float L = letters * 100.0/words ;
   float S = sentences * 100.0/words ;
   float grade = 0.0588 * L - 0.296 * S - 15.8;
       int x = round(grade);

       //print the grade level
       /*
       if grade is = or less than 1, print .....
       if grade is = or greater than 16, print ....
       if grade is between 1 and 16, print grade level*/
       if(grade < 1){
        printf("Before Grade 1\n");
       }else if(grade >= 16){
        printf("Grade 16+\n");
       }else{
        printf("Grade %i\n", x);
       }
}

int count_letters(string text){
    /*
    Add this functions's prototype at the top of this file, so that main knows how to
    call it.
    Count the letters in a text:
    1. loop through each character in text, before looping find out string's length,
       include the <string.h> library.
        1.1 to count the letters, initialize a counter before the loop, set it to 0.
        1.2 if the character is alphabatical(upper or lower), increment the counter.
            Which method will you need from <ctype.h> lib? its not islower or isupper.
        1.3 not counting spaces, punctuation or other non-alphabatical characters
            1.3.1 no else statement with a return 0, because as soon as it encounters
                  space,it executes
                  'return 0', loop stops counting, returns 0 as the final result.
                  will exit. e.g in "here she comes", after 'here' it stops and returns 0.
    2. Outside the loop, retrun total number of letters in the text.

    3. In the main fun, print total num of letters by calling count_letters function on user_input.
       why not passing 'text' instead of 'user_input'since count_letters(text). Bcz, we need to find
       the num of letters in the text entered by the user.*/
    int text_length =  strlen(text);
    int letter_count= 0;
    for(int i=0; i<text_length; i++){
        if(isalpha(text[i])){
            letter_count += 1;
        }
    }
    return letter_count;

}

int count_words(string text){
    /*
    add the protype of this function at the top of the file, so main knows how to
    call it.
    count num of words in the given text:
    1. loop through every word in the sentence
        1.1 Find the string length before looping, use that method from <string.h> lib
        1.2 Count the words by counting spaces between the words, detect spaces first,
            using a function from <ctype.h> lib.
        1.3 If a space character is found, increment the word count(this gives word count
            after the space). First, initialize the counter, before the loop.
    2. Note that num of words are more than num of spaces in a sentence, because there's
        no space after the last word.
        And what if there is a single word in the user input
        How do you count the initial word before the space?
        'Here she comes' has 2 spaces and 3 words.
        The answer lies in: After the loop, add 1 to the word count and return it.
    3. In the main func, print total num of words by calling function count_words on user_input.
    */
   int text_length = strlen(text);
   int word_count = 0;
   for(int i=0; i<text_length; i++){
    if(isspace(text[i])){
        word_count += 1;
    }
   }
   return word_count + 1;
}

int count_sentences(string text){
    /*
    1. add the protype of this function at the top of the file, so main knows how to
    call it.
    if the a sequence of characters end with '!' ',' '.' in the text, consider it 3 sentences.
    e.g Mr. and Mrs. Dursley, of number four Privet Drive, were proud to say that they were
    perfectly normal, thank you very much.
    2. loop through the characters in the given text
        1.1 to count the sentences, first initialize the counter before the loop
        1.2 At current index in a text, if there is '!' or '.' or ',' increment the sentence count.
        1.3 else if there are two dots simultaneously, do nothing: means do not interpret as the end
            of a sentence.


    */
   int text_length = strlen(text);
   int sentence_count = 0;

   for(int i=0; i<text_length; i++){
    if(text[i]== '.' || text[i] == '?' || text[i] == '!'){

        sentence_count += 1;            //increase the sentence count

    } else if(text[i] == '.' && text[i+1] == '.'){
        //do nothing

    }

    }
return sentence_count;

}
