#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;
    
    /* Seed the random number generator */
    srand(time(0));

    /* Generate a random number */
    n = rand() - RAND_MAX / 2;

    /* Check if the number is positive, negative, or zero */
    if (n > 0) {
        printf("is positive");
    } else if (n < 0) {
        printf("is negative");
    } else {
        printf("is zero");
    }

    printf("\n");

    return 0;
}





