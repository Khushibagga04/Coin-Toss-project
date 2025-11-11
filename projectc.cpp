#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
   int userChoice, tossResult;
   char playAgain;
 
   srand(time(0)); // Seed for random number generator
 
   printf("Welcome to the Coin Toss Game!\n");
 
   do {
       printf("\nGuess the coin toss result:\n");
       printf("Enter 0 for Heads or 1 for Tails: ");
       scanf("%d", &userChoice);
 
       if (userChoice != 0 && userChoice != 1) {
           printf("Invalid input! Please enter 0 or 1.\n");
           continue;
       }
 
       tossResult = rand() % 2; // 0 for Heads, 1 for Tails
 
       printf("Coin is tossed... ");
 
       if (tossResult == 0)
           printf("It's Heads!\n");
       else
           printf("It's Tails!\n");
 
       if (userChoice == tossResult)
           printf("Congratulations! You guessed it right.\n");
       else
           printf("Oops! Better luck next time.\n");
 
       printf("Do you want to play again? (y/n): ");
       scanf(" %c", &playAgain);
 
   } while (playAgain == 'y' || playAgain == 'Y');
 
   printf("Thanks for playing!\n");
   return 0;
}
