#include <cs50.h>
#include <stdio.h>

// nesting loops (loop inside loop)
// cleaning up integer for amount of bricks/loops

int main(void)
{
    // n = amount of bricks
    // 'const int' means it's a constant and can't be changed below, eliminates mistakes
    const int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
