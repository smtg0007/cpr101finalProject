//Created by: Shaheer Sohail
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

//converting MODULE Source 
void converting() {
/* Version 1 */
printf("*** Start of Converting Strings to int Demo ***\n"); 
char int_string[80]; //initializing an array of characters which is 80 bytes long 
int int_number;
    do {
            printf("Type the int numeric string (q - to quit):\n"); //prompt user to enter a number
            fgets(int_string, BUFFER_SIZE, stdin); //putting each character into separate slots in the int_string array
            int_string[strlen(int_string) - 1] = '\0'; // taking last slot in the array and putting the '0' character
            int_number = atoi(int_string); //takes the int_string array and converts it to an int number
            printf("Converted number is %d\n", int_number); //prints out the number
        }while(strcmp(int_string, "q")); //as long as the user does not type in "q"
    printf("*** End of Converting Strings to int Demo ***\n\n");


/* Version 2 */
printf("*** Start of Converting Strings to double Demo ***\n");
char double_string[80]; //initializing an array of characters which is 80 bytes long
double double_number;
do{
    printf("Type the double numeric string (q - to quit):\n"); //prompt user to enter a number
    fgets(double_string, BUFFER_SIZE, stdin); //putting each character into separate slots in the double_string array
    double_string[strlen(double_string) - 1] = '\0'; // taking last slot in the array and putting the '0' character
    if((strcmp)(double_string, "q") != 0)
    {
        double_number = atof(double_string); //takes the double_string array and converts it to a double number
        printf("Converted number is %f\n", double_number); //prints out the number
    }
}while(strcmp(double_string, "q")); //as long as the user does not type in "q"
printf("*** End of Converting Strings to double Demo ***\n\n");


/* Version 3 */
//>> insert here


}