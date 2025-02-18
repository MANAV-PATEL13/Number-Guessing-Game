#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, gs, a;
    char pa = 'y';

    srand(time(0));

    while (pa == 'y' || pa == 'Y') {
        n = rand() % 100 + 1;
        a = 0;

        printf("\n\033[1mWelcome to 'The Number Guessing Game!'\033[0m\n");
        printf("I have selected a number between 1 and 100. Can you guess it?\n");

        do {
            printf("\nEnter your guess: ");
            scanf("%d", &gs);
            a++;

            if (gs < n) {
                printf("Too low! Try again.\n");
            } else if (gs > n) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number in %d attempts.\n", a);
            }
        } while (gs != n);
       
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &pa);
    } 

    printf("\nThank you for playing! Goodbye!\n\n");

    return 0;
}
