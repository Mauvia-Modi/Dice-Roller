#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int ten()
{

    int d10 = 0;
    int i;
    int result10;
    int sum10=0;

    printf("Enter the number of times you want to roll this ten-sided die: ");

    scanf(" %d", &d10);

    printf("\n");

    for(i=1; i<=d10; i++)
    {
        result10 = ( rand()%10 ) + 1;
        sum10 = sum10 + result10;
        printf("Die #%d rolled a %d!\n", i, result10);

    }

    printf("\nThe sum of all rolls is %d.", sum10);


}
