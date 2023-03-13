// Guess the number v0x01 by Elvis

#include <stdio.h>
// #include <stdlib.h>
#include <time.h>
#include <stdbool.h>



int main() {
    
    // initialize random
    srand(time(NULL));  // Seed the random number generator
    
    int randNum = (rand()%50)+1;
    int guess;
    int userGuesses;
    char nickname[30];

    printf("Welcome to my first C game!!\n");
    printf("What should I call you?\n");

    printf("=> You can call me: ");
    scanf("%s", nickname);
    
    printf("Hello, %s!\n", nickname);
    printf("Lets play a guessing name;\n");

    printf("You'll guess a number from 1-50\n");
    printf("And I'll tell you if its too hot or cold\n");
    

    while(true) {

        printf("Guess: ");
        scanf("%d", &guess);

        if (guess > randNum) {
            printf("Hot!!\n");

        } else if (guess < randNum) {
            printf("Cold!!\n");

        } else {
            printf("Yesss\n");
            break;

        }    
    }

    return 0;
}