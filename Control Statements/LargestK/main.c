/*
Write a program which for any given positive integer N (read from the keyboard) computes the largest integer K such that 0+2+4+6+8+...+K < N.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int input = 0;
    int k = 0;
    int sum = 0;

    printf("%s", "Give a positive integer: ");
    scanf("%i", &input);

    while (sum < input)
    {
        k += 2;
        sum += k;
    }

    printf("%s%i%s%i\n", "The largest K such that 0+2+4+6+...+K < ", input, " => K=", k - 2);
    return 0;
}