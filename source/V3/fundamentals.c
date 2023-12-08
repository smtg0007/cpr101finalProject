//Created by: Shaheer Sohail
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"

void fundamentals() {

// /* Version 3 */

printf("*** Start of copying Strings Demo ***\n");
char destinition[BUFFER_SIZE]; //initializing an array of characters which is 80 bytes long
char source[BUFFER_SIZE]; //initializing an array of characters which is 80 bytes long
do{
    destinition[0] = '\0'; // taking last slot in the array and putting the '0' character
    printf("Destination string is reset to empty\n");
    printf("Type the source string (q - to quit):\n"); 
    fgets(source, BUFFER_SIZE, stdin); //putting each character into separate slots in the phrase array
    source[strlen(source) - 1] = '\0'; // taking last slot in the array and putting the '0' character
    if(strcmp(source, "q") != 0)
    {
        strcpy(destinition, source); 
        printf("New destination string is \'%s\'\n", destinition); //prints out the phrase and the number of the phrase
    }
}while(strcmp(source, "q") != 0);
printf("*** End of copying Strings Demo ***\n\n");

}