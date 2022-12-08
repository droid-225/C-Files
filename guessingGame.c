#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = (rand() % MAX) + MIN;

    do {
        printf("Guess What the Number is: ");
        scanf("%d", &guess);
        if(guess > answer) 
            printf("Too High!\n");
        else if(guess < answer)
            printf("Too Low!\n");
        else 
            printf("CORRECT!\n");
        guesses++;
    } 
    while (guess != answer);

    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
}