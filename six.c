#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int six()
{

    int d6 = 0;
    int i;
    int result6;
    int sum6=0;

    printf("Enter the number of times you want to roll this six-sided die: ");

    scanf(" %d", &d6);

    printf("\n");

    for(i=1; i<=d6; i++)
    {
        result6 = ( rand()%6 ) + 1;
        sum6 = sum6 + result6;
        printf("Die #%d rolled a %d!\n", i, result6);

    }

    printf("\nThe sum of all rolls is %d.", sum6);


}
