/*
Write a program reading a positive odd integer N from the keyboard, and then prints two triangles. First a right-angled triangle, then an isosceles triangle. The program should end with an error message if the input N is not an odd postive integer.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int input = 0;

    printf("Provide an positive odd integer: ");
    scanf("%i", &input);

    if (input % 2 == 0 || input < 0)
    {
        printf("Please provide positive odd integer only\n");
        return 1;
    }

    printf("Right-Angled Triangle:\n");

    for (int i = 1; i <= input; i++)
    {
        for (int j = i; j < input; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("Isosceles Triangle:\n");

    for (int i = 1; i <= input; i += 2)
    {
        int stars = i;
        int spaces = (input - i) / 2;

        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= stars; k++)
        {
            printf("*");
        }

        for (int l = 0; l < spaces; l++)
        {
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}