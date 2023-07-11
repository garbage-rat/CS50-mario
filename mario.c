#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt User for Height
    int n;
    do
    {
        n = get_int("Height: ");
    }

    while (n < 1 || n > 8);

    // Use Height to Print Pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if
            (i + j < n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }

            printf("\n");
        }
    }