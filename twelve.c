#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int twelve()
{

    int d12 = 0;
    int i;
    int result12;
    int sum12=0;

    printf("Enter the number of times you want to roll this twelve-sided die: ");

    scanf(" %d", &d12);

    printf("\n");

    for(i=1; i<=d12; i++)
    {
        result12 = ( rand()%12 ) + 1;
        sum12 = sum12 + result12;
        printf("Die #%d rolled a %d!\n", i, result12);

    }

    printf("\nThe sum of all rolls is %d.", sum12);


}
