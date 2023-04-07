#include <cs50.h>
#include <stdio.h>

// nesting loops (loop inside loop)
// cleaning up integer for amount of bricks/loops
// get_int added this time

int main(void)
{
    // prompt user for size of bricks/# signs
    // user can choose to what size
    // but what if they say a word or choose a negative number?
    
    int n = get_int("Size: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}