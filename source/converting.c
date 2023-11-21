#define _CRT_SECURE_NO_WARNINGS
#include "converting.h"
#define BUFFER_SIZE 80

//converting MODULE Source 
void converting() {
/* Version 1 */
printf("*** Start of Converting Strings to int Demo ***\n");
char int_string[80];
int int_number;
    do {
            printf("Type the int numeric string (q - to quit):\n");
            fgets(int_string, BUFFER_SIZE, stdin);
            int_string[strlen(int_string) - 1] = '\0';
            int_number = atoi(int_string);
            printf("Converted number is %d\n", int_number);
        }while(strcmp(int_string, "q"));
    printf("*** End of Converting Strings to int Demo ***\n\n");


/* Version 2 */
//>> insert here


/* Version 3 */
//>> insert here


}
