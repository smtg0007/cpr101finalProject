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
    int option; 

        printf("Select the demo to run (1 - 4):\n");
        printf("1 - Indexing Strings\n");
        printf("2 - Tokenizing Strings\n");
        printf("3 - Concatenating Strings\n");
        printf("4 - Converting Strings\n");
        printf("5 - Quit\n");
        scanf("%d", &option);
        switch (option)
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
    printf("Bye!\n");
    return 0;
}