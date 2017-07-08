/*
 Write a program SecondLargest that reads 10 integers from the keyboard and then prints the second largest one. Try to design the program such that changing the number of integers to be read (10) is easy. Recommendation: Use a smaller value than 10 while developing the program.
 Notice: You are not allowed to use arrays or any other data structure for storing all the integers.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int largest = 0;
    int secondLargest = 0;

    printf("Provide 10 positive integers: ");

    for (int i = 0; i < 10; i++)
    {
        int input = 0;
        scanf("%i", &input);

        if (input > largest)
        {
            secondLargest = largest;
            largest = input;
        }

        else if (input > secondLargest)
        {
            secondLargest = input;
        }
    }

    printf("%s %i\n", "The second largest is:", secondLargest);
    return 0;
}