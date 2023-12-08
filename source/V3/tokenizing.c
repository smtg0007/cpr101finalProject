#define BUFFER_SIZE 300
#define _CRT_SECURE_NO_WARNINGS
#include "tokenizing.h"

void tokenizing() {
// /* Version 3 */
printf("*** Start of Tokenizing sentences Demo ***\n");
char sentences[BUFFER_SIZE]; //initializing an array of characters which is 80 bytes long
char* nextSentence = NULL;
int sentencesCounter; 

do{
    printf("Type a few sentences serparated by dot(q - to quit):\n"); //prompt user to enter a string
    fgets(sentences, BUFFER_SIZE, stdin); //putting each character into separate slots in the phrase array
    sentences[strlen(sentences) - 1] = '\0'; // taking last slot in the array and putting the '0' character
    if((strcmp(sentences, "q") != 0))
    {
        nextSentence = strtok(sentences, ".");
        sentencesCounter = 1; 
        while (nextSentence)
        {
            printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
            nextSentence = strtok(NULL, ".");
        }
    }
}while(strcmp(sentences, "q") != 0);
printf("*** End of Tokenizing sentences Demo ***\n\n");

}