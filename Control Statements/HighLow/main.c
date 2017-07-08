/*
Write a program implementing the game High and Low. The computer chooses a random integer between 1 and 100 and lets the user guess the value. After each guess, the user is given a clue of the type “higher” or “lower”. After 10 guesses, the program ends with a proper comment.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int input = 0;
    int random = rand() % 100 + 1;
    printf("Guess a number between 1 and 100. You have 10 guesses.\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%s %i %s", "Guess", i, ": ");
        scanf("%i", &input);

        if (input == random)
        {
            printf("%s %i %s\n", "Correct answer after only", i, "guesses – Excellent!");
            break;
        }
        else if (input > random)
        {
            printf("Clue: lower\n");
        }
        else
        {
            printf("Clue: higher\n");
        }
    }

    if (input != random)
    {
        printf("%s %i\n", "Correct answer is", random);
    }

    return 0;
}