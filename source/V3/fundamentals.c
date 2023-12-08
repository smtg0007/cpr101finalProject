//Created by: Shaheer Sohail
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"

void fundamentals() {
// /* Version 2 */
printf("*** Start of Measuring Strings Demo ***\n");
char buffer2[BUFFER_SIZE]; //initializing an array of characters which is 80 bytes long
do{
    printf("Type a string (q - to quit):\n");
    fgets(buffer2, BUFFER_SIZE, stdin); //putting each character into separate slots in the buffer2 array
    buffer2[strlen(buffer2) - 1 ] = '\0'; // taking last slot in the array and putting the '0' character
    if (strcmp(buffer2, "q") != 0) 
    {
        printf("The length of \'%s\' is %d\n", buffer2, (int)strlen(buffer2)); //prints out the length of the string
    }
} while(strcmp(buffer2, "q") != 0);
printf("*** End of Measuring Strings Demo ***\n\n");


// /* Version 3 */
// >> insert here


}