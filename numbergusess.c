#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_banner() {
    printf("\n\033[0;33m"); // Yellow color
    printf("====================================\n");
    printf("      WELCOME TO THE NUMBER GAME!      \n");
    printf("====================================\n\033[0m");
}

void print_congratulations(int attempts) {
    printf("\n\033[0;32m"); // Green color
    printf("  CONGRATULATIONS!  \n");
    printf("  You guessed the number in %d attempts!\n", attempts);
    printf("\033[0m");
}

void print_rules() {
    printf("\n\033[0;34mI have selected a number between 1 and 100.\nTry to guess it!\n\033[0m");
}

int main() {
    int n, gs, a;
    char pa = 'y';

    srand(time(0));

    while (pa == 'y' || pa == 'Y') {
        n = rand() % 100 + 1;
        a = 0;

        print_banner();
        print_rules();


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
