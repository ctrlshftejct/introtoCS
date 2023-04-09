#include <cs50.h>
#include <stdio.h>

// nesting loops (loop inside loop)
// cleaning up integer for amount of bricks/loops
// get_int added this time
<<<<<<< HEAD
=======
// guiding/forcing user to use right input
// using do/while loop
>>>>>>> af60e8cb895ce25dc32e9d7723ef243229eb0b75

int main(void)
{
    // prompt user for size of bricks/# signs
    // user can choose to what size
<<<<<<< HEAD
    // but what if they say a word or choose a negative number?
    
    int n = get_int("Size: ");
=======
    // forces proper input
    int n;
    do // do/while loop
    {
        n = get_int("Size: ");
    }
    while (n < 1);
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