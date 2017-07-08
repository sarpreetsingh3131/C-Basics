/*
 Write a program BirthdayCandles that computes how many boxes of candles a person needs to buy each year for his birthday cake. You can assume that the person reaches an age of 100, the number of candles used each year is the same as the age, that you save non-used candles from one year to another, and that each each box contains 24 candles. Also, at the end, we want you to print the total number of boxes one has to buy, and how many candles that are available after having celebrated the 100th birtday.
 */

#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int boxes = 0;
    int candles = 0;

    for (int i = 1; i <= 100; i++)
    {
        int newBoxes = 0;
        while (candles < i)
        {
            candles += 24;
            newBoxes++;
        }

        if (newBoxes != 0)
        {
            printf("%s %i %s %i %s\n", "Before birthday", i, "buy", newBoxes, "box(es)");
        }
        candles -= i;
        boxes += newBoxes;
    }

    printf("%s %i %s %i\n", "Total number of box", boxes, ", Remaining candles:", candles);
    return 0;
}