#include <cs50.h>
#include <stdio.h>

// nesting loops (loop inside loop)
// cleaning up integer for amount of bricks/loops
<<<<<<< HEAD

int main(void)
{
    // n = amount of bricks
    // 'const int' means it's a constant and can't be changed below, eliminates mistakes
    const int n = 4;
=======
// get_int added this time

int main(void)
{
    // prompt user for size of bricks/# signs
    // user can choose to what size
    // but what if they say a word or choose a negative number?
    
    int n = get_int("Size: ");

>>>>>>> af60e8cb895ce25dc32e9d7723ef243229eb0b75
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}