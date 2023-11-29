#define BUFFER_SIZE 80 
#define NUM_INPUT_SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tokenizing.h"
#include "manipulating.h"
#include "fundamentals.h"
#include "converting.h"

int main()
{
    char buff[10]; 
    do {
        printf("1 - Fundamentals \n");
        printf("2 - Tokenizing \n");
        printf("3 - Concatenating \n");
        printf("4 - Converting \n");
        printf("0 - Exit\n");
        printf("Which module to run? \n");
        fgets(buff, 10, stdin);
        switch (buff[0])
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
    }while(buff[0] != '0');
    return 0;
}