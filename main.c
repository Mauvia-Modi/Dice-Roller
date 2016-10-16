#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
     srand(time(NULL));

    int decider=0;
    char close;

    printf("Hello, and welcome to the Dice-a-Tron! This program lets you roll different kinds of popular dice and also sums up the result for you in the end. \n\n");
    printf("Lets get started! What type of Die do you want to roll? Just type:\n\n");
    printf("1 for a regular six-sided die.\n");
    printf("2 for a four-sided die.\n");
    printf("3 for an eight-sided die.\n");
    printf("4 for a ten-sided die.\n");
    printf("5 for a twelve-sided die.\n");
    printf("6 for a twenty-sided die.\n\n");

    scanf(" %d", &decider);

    printf("\n\n");

    if(decider==1) {
        six();
    }else if(decider == 2) {
        four();
    }else if(decider == 3){
        eight();
    }else if(decider == 4){
        ten();
    }else if(decider == 5){
        twelve();
    }else if(decider == 6){
        twenty();
    }

    printf("\n\nThe Dice-a-Tron hath bless'd thou with true randomness. SALUT!\n\n\n");

    printf("Enter anything to close the Dice-a-Tron.");
    scanf(" %c", &close);

    return 0;
}
