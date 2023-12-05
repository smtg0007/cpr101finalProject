#define BUFFER_SIZE 300
#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h"

void tokenizing() {
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