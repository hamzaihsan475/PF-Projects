#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ran, guess;
    int num_of_guess = 0;

    srand(time(NULL));
    printf("Welcome to the GUESS GAME!!!");

    ran = rand() % 100 + 1;

    do {
        printf("\nPlease enter a number between 1 to 100: ");
        scanf("%d", &guess);
        num_of_guess++;

        if (guess > ran) {
            printf("Your guess is too high!");
        } else if (guess < ran) {
            printf("Your guess is too low!");
        } else {
            printf("\nCongratulations!!! You guessed it in %d attempts.", num_of_guess);
        }
    } while (guess != ran);

    printf("\nGame Ends.");
    printf("\nDeveloped by Hamza Ihsan.");

    return 0;
}
