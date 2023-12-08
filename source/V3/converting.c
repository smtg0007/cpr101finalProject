//Created by: Shaheer Sohail
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

//converting MODULE Source 
void converting() {

/* Version 3 */
printf("*** Start of converting Strings to long Demo ***\n");
char longString[BUFFER_SIZE]; //initializing an array of characters which is 80 bytes long
long longNumber; 
do {
    printf("Type the long numeric string (q - to quit):\n"); //prompt user to enter a string
    fgets(longString, BUFFER_SIZE, stdin); //putting each character into separate slots in the phrase array
    longString[strlen(longString) - 1] = '\0'; // taking last slot in the array and putting the '0' character
    if (strcmp(longString, "q") != 0) {
        longNumber = atol(longString); 
        printf("Converted number is %ld\n", longNumber); //prints out the phrase and the number of the phrase
    }
}while(strcmp(longString, "q") != 0);
printf("*** End of Converting Strings to long Demo ***\n\n");

}