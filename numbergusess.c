#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, gs, a = 0;
    char pa = 'y';

    //for random number generator
    srand(time(0));

    while (pa == 'y' || pa == 'Y')
    {
        // Generate a random number between 1 and 100
        n = rand() % 100 + 1;

        printf("\n\033[1mWelcome to 'The Number Guessing Game!\033[0m'\n");
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

        a = 0;

    } 

    printf("\nThank you for playing! Goodbye!\n");

    return 0;
}
