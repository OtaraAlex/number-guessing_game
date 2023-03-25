#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, user_guess;

    // Initialize random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    secret_number = rand() % 100 + 1;

    printf("Welcome to the number guessing game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);

        if (user_guess > secret_number) {
            printf("Too high! Try again.\n");
        } else if (user_guess < secret_number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number: %d\n", secret_number);
        }
    } while (user_guess != secret_number);

    return 0;
}
