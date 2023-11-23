#define BUFFER_SIZE 80 
#define NUM_INPUT_SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tokenizing.h"
#include "manipulating.h"
#include "fundamentals.h"
#include "converting.h"

int main(void)
{
    char option[BUFFER_SIZE];
    do
    {
        printf("Select the demo to run (1 - 4):\n");
        printf("1 - Indexing Strings\n");
        printf("2 - Tokenizing Strings\n");
        printf("3 - Concatenating Strings\n");
        printf("4 - Converting Strings\n");
        printf("5 - Quit\n");
        fgets(option, BUFFER_SIZE, stdin);
        switch (option[0])
        {
        case '1':
            fundamentals();
            break;
        case '2':
            tokenizing();
            break;
        case '3':
            manipulating();
            break;
        case '4':
            converting();
            break;
        }
    } while (option[0] != '5');
    printf("Bye!\n");
    return 0;
}