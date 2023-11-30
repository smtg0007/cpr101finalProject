#define BUFFER_SIZE 80
#define _CRT_SECURE_NO_WARNINGS
#include "manipulating.h"

void manipulating() {
/* Version 1 */
printf("*** Start of Concatenating Strings Demo ***\n");
char string1[BUFFER_SIZE]; //initializing an array of characters which is 80 bytes long
char string2[BUFFER_SIZE];

do{
    printf("Type the 1st string (q - to quit):\n");
    fgets(string1, BUFFER_SIZE, stdin); //putting each character into separate slots in the string1 array
    string1[strlen(string1) -1] = '\0'; // taking last slot in the array and putting the '0' character
    if ((strcmp(string1, "q") != 0)){
        printf("Type the 2nd string:\n");
        fgets(string2, BUFFER_SIZE, stdin); //putting each character into separate slots in the string2 array
        string2[strlen(string2) -1] = '\0'; // taking last slot in the array and putting the '0' character
        strcat(string1, string2); //concatenates string1 and string2
        printf("Concatenated string is \'%s\'\n", string1); //prints out the concatenated string
    }
} while (strcmp(string1, "q") != 0); //as long as the user does not type in "q"
printf("*** End of Concatenating Strings Demo ***\n\n");
// >> insert here


// /* Version 3 */
// >> insert here


}

int main()
{
    manipulating();
}