#include <cs50.h>
#include <stdio.h>

// nesting loops (loop inside loop)
<<<<<<< HEAD

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
=======
// cleaning up integer for amount of bricks/loops

int main(void)
{
    // n = amount of bricks
    // 'const int' means it's a constant and can't be changed below, eliminates mistakes
    const int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
>>>>>>> af60e8cb895ce25dc32e9d7723ef243229eb0b75
        {
            printf("#");
        }
        printf("\n");
    }
<<<<<<< HEAD
}
=======
}
>>>>>>> af60e8cb895ce25dc32e9d7723ef243229eb0b75
