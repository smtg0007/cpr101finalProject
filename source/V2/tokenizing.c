#define BUFFER_SIZE 300
#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h"

void tokenizing() {
/* Version 1 */
printf("*** Start of Tokenizing Words Demo ***\n");
char words[BUFFER_SIZE]; //initializing an array of characters which is 80 bytes long
char* nextWord = NULL; //initializing a pointer to a character
int wordsCounter; //initializing an integer variable

do{
   
    printf("Type a few words separated by space(q - to quit):\n"); //prompt user to enter a string 
    fgets(words, BUFFER_SIZE, stdin); //putting each character into separate slots in the words array
    words[strlen(words) - 1] = '\0'; // taking last slot in the array and putting the '0' character
    if(strcmp(words, "q") != 0)
    {
        nextWord = strtok(words, " "); //takes the words array and tokenizes it by spaces
        wordsCounter = 1; //initializing the wordsCounter to 1
        while(nextWord)
        {
            printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); //prints out the word and the number of the word
            nextWord = strtok(NULL, " "); //takes the next word in the words array and tokenizes it by spaces
        }
    }
} while(strcmp(words, "q")); //as long as the user does not type in "q"
printf("*** End of Tokenizing Words Demo ***\n\n");



// /* Version 2 */
printf("*** Start of Tokenizing Phrases Demo ***\n");
char phrases[BUFFER_SIZE]; //initializing an array of characters which is 80 bytes long
char* nextPhrase = NULL; //initializing a pointer to a character
int phrasesCounter;
do{
    printf("Type a few phrases separated by comma (q - to quit):\n"); //prompt user to enter a string
    fgets(phrases, BUFFER_SIZE, stdin); //putting each character into separate slots in the phrase array
    phrases[strlen(phrases) - 1] = '\0'; // taking last slot in the array and putting the '0' character
    if(strcmp(phrases, "q") != 0)
    {
        nextPhrase = strtok(phrases, ","); //takes the phrase array and tokenizes it by commas
        phrasesCounter = 1; //initializing the phrasesCounter to 1
        while(nextPhrase)
        {
            printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase); //prints out the phrase and the number of the phrase
            nextPhrase = strtok(NULL, ","); //takes the next phrase in the phrase array and tokenizes it by commas
        }
    }
} while(strcmp(phrases, "q") != 0);
printf("*** End of Tokenizing Phrases Demo ***\n\n");


// /* Version 3 */
// >> insert here


}