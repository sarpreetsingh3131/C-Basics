/*
Write a program that reads a string from the keyboard and then prints how many 'a' and 'A' the string contains.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char text[100];
    int a = 0;
    int A = 0;

    printf("Provide a line of text: ");
    fgets(text, 100, stdin);

    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == 'a')
        {
            a++;
        }
        else if (text[i] == 'A')
        {
            A++;
        }
    }

    printf("%s%i\n", "Number of a: ", a);
    printf("%s%i\n", "Number of A: ", A);
    return 0;
}