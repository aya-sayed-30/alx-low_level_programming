#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;
    
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between -100 and 100
    n = rand() % 201 - 100;

    // Print the random number
    printf("The number %d ", n);

    // Check if the number is positive, negative, or zero
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





