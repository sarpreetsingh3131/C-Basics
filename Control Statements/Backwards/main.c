/*
Write a program that reads an arbitrary string from the keyboard and then prints it backwards.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char text[100];
    printf("Provide a line of text: ");
    fgets(text, 100, stdin);

    for (int i = (int)strlen(text) - 1; i >= 0; i--)
    {
        printf("%c", text[i]);
    }

    return 0;
}