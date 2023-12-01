//Created by: Shaheer Sohail
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"

void fundamentals() {
printf("*** start of Indexing Strings Demo ***\n");
char buffer1[BUFFER_SIZE]; //initializing an array of characters which is 80 bytes long
char num_input[NUM_INPUT_SIZE];
size_t position;
do{
    printf("Type a string (q - to quit):\n");
    fgets(buffer1, BUFFER_SIZE, stdin); //putting each character into separate slots in the buffer1 array
    buffer1[strlen(buffer1) - 1] = '\0'; // taking last slot in the array and putting the '0' character
    if(strcmp(buffer1, "q") != 0) 
    {
        printf("Type the character Position within the string:\n");
        fgets(num_input, NUM_INPUT_SIZE, stdin); //putting each character into separate slots in the num_input array
        num_input[strlen(num_input) - 1] = '\0'; // taking last slot in the array and putting the '0' character
        position = atoi (num_input); //takes the num_input array and converts it to an int number
        if(position >= strlen(buffer1)) 
        {
            position = strlen( buffer1) - 1; //if the position is greater than the length of the string, then the position is set to the length of the string - 1
            printf("Too big... Position reduced to max. available\n"); //prints out this message then finds the last character in the string
        }
        printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]); //prints out the number
    }
}while(strcmp(buffer1, "q") != 0);

printf("*** End of Indexing Strings Demo ***\n\n");


// /* Version 2 */
// >> insert here


// /* Version 3 */
// >> insert here


}