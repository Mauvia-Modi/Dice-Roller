#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int four()
{

    int d4 = 0;
    int i;
    int result4;
    int sum4=0;

    printf("Enter the number of times you want to roll this four-sided die: ");

    scanf(" %d", &d4);

    printf("\n");

    for(i=1; i<=d4; i++)
    {
        result4 = ( rand()%4 ) + 1;
        sum4 = sum4 + result4;
        printf("Die #%d rolled a %d!\n", i, result4);

    }

    printf("\nThe sum of all rolls is %d.", sum4);


}
