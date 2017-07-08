/*
 Write a program that for an arbitrary positive integer N (read from the keyboard) prints the number of zeros, odd digits, and even digits.
 */

#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int input = 0;
    int zeros = 0;
    int odds = 0;
    int evens = 0;

    printf("Provide a positive integer: ");
    scanf("%i", &input);

    while (input != 0)
    {
        if ((input % 10) == 0)
        {
            zeros++;
        }
        else if ((input % 10) % 2 == 0)
        {
            evens++;
        }
        else if ((input % 10) % 2 != 0)
        {
            odds++;
        }
        input /= 10;
    }

    printf("%s%i\n", "Zeros: ", zeros);
    printf("%s%i\n", "Odd: ", odds);
    printf("%s%i\n", "Even: ", evens);
    return 0;
}