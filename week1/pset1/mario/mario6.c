#include <cs50.h>
#include <stdio.h>

// nesting loops (loop inside loop)
// cleaning up integer for amount of bricks/loops
// get_int added this time
// guiding/forcing user to use right input
// using do/while loop

int main(void)
{
    // prompt user for size of bricks/# signs
    // user can choose to what size
    // forces proper input
    int n;
    do // do/while loop
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}