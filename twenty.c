#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int twenty()
{

    int d20 = 0;
    int i;
    int result20;
    int sum20=0;

    printf("Enter the number of times you want to roll this twenty-sided die: ");

    scanf(" %d", &d20);

    printf("\n");

    for(i=1; i<=d20; i++)
    {
        result20 = ( rand()%20 ) + 1;
        sum20 = sum20 + result20;
        printf("Die #%d rolled a %d!\n", i, result20);

    }

    printf("\nThe sum of all rolls is %d.", sum20);


}
