#define BUFFER_SIZE 80
#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"

void manipulating() {
// /* Version 2 */
printf("*** Start of Comparing Strings Demo ***\n");
char compare1[BUFFER_SIZE]; //initializing an array of characters which is 80 bytes long
char compare2[BUFFER_SIZE];
int result;
do{
    printf("Type the 1st string to compare (q - to quit):\n");
    fgets(compare1, BUFFER_SIZE, stdin); //putting each character into separate slots in the compare1 array
    compare1[strlen(compare1) -1] = '\0'; // taking last slot in the array and putting the '0' character
    if (strcmp(compare1,"q") != 0)
    {
        printf("Type the 2nd string to compare:\n");
        fgets(compare2, BUFFER_SIZE, stdin); //putting each character into separate slots in the compare2 array
        compare2[strlen(compare2) -1] = '\0'; // taking last slot in the array and putting the '0' character
        result = strcmp(compare1, compare2); //compares the two strings
        if(result < 0)
            printf("\'%s\' is less than \'%s\'\n", compare1, compare2); //prints out the result
        else if(result == 0)
            printf("\'%s\' is equal to \'%s\'\n", compare1, compare2); //prints out the result
        else
            printf("\'%s\' is greater than \'%s\'\n", compare1, compare2); //prints out the result
    }
} while(strcmp(compare1, "q") != 0); //as long as the user does not type in "q"
printf("*** End of Comparing Strings Demo ***\n\n");


// /* Version 3 */
// >> insert here


}