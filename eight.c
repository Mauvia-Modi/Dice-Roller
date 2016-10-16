#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int eight()
{

    int d8 = 0;
    int i;
    int result8;
    int sum8=0;

    printf("Enter the number of times you want to roll this eight-sided die: ");

    scanf(" %d", &d8);

    printf("\n");

    for(i=1; i<=d8; i++)
    {
        result8 = ( rand()%8 ) + 1;
        sum8 = sum8 + result8;
        printf("Die #%d rolled a %d!\n", i, result8);

    }

    printf("\nThe sum of all rolls is %d.", sum8);


}
