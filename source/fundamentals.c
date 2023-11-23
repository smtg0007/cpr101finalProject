#include "fundamentals.h"
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10

void fundamentals() {
printf("*** start of Indexing Strings Demo ***\n");
char buffer1[BUFFER_SIZE];
char num_input[NUM_INPUT_SIZE];
size_t position;
do{
    printf("Type a string (q - to quit):\n");
    fgets(buffer1, BUFFER_SIZE, stdin);
    buffer1[strlen(buffer1) - 1] = '\0';
    if(strcmp(buffer1, "q") != 0)
    {
        printf("Type the character Position within the string:\n");
        fgets(num_input, NUM_INPUT_SIZE, stdin);
        num_input[strlen(num_input) - 1] = '\0';
        position = atoi (num_input);
        if(position >= strlen(buffer1))
        {
            position = strlen( buffer1) - 1;
            printf("Too big... Position reduced to max. available\n");
        }
        printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);
    }
}while(strcmp(buffer1, "q") != 0);

printf("*** End of Indexing Strings Demo ***\n\n");


// /* Version 2 */
// >> insert here


// /* Version 3 */
// >> insert here


}