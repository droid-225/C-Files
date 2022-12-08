#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // psuedo random numbers = A set of values or elements that are statistically random
    //                         (Don't use these for any sort of cryptographic security)

    srand(time(0));
    // s for seed, rand for random
    // here time is used as the seed value
    // every second counts as a new seed
    // time(0) gives the time

    int number1 = (rand() % 20) + 1; // rand gives random number between 0 and 32,767
    // (rand() % 6) + 1 gives numbers between 1 and 6
    int number2 = (rand() % 20) + 1;
    int number3 = (rand() % 20) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d", number3);
}