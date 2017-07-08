/*
Write a program testing if a line of text (read from the keyboard) is a palindrome. A palindrome is a text consisting of the same sequence of characters read backwards, as if read from the front. Ignore all characters that are not letters, and consider an upper case letter to be equal to the corresponding lower case letter.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char *argv[])
{
    char input[100];

    printf("Write a line: ");
    fgets(input, 100, stdin);

    char letter[strlen(input)];
    int index = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        if (isalpha(input[i]))
        {
            letter[index++] = tolower(input[i]);
        }
    }

    for (int i = 0; i < index / 2; i++)
    {
        if (letter[i] != letter[index - 1 - i])
        {
            printf("The given line is not palindrome!!\n");
            return 0;
        }
    }

    printf("The given line is palindrome!!\n");
    return 0;
}