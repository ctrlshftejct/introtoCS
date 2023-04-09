#include <cs50.h>
#include <stdio.h>

<<<<<<< HEAD
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
=======
// how to add comments and write what you want code to do
// how to clean up code to make it seem

// how to create functions
// this makes code mor concise and hides all the functions/details

int get_size(void);
void print_grid(int size);

int main(void)
{
    // Get size of grid
    int n = get_size();
    // Print grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
>>>>>>> af60e8cb895ce25dc32e9d7723ef243229eb0b75
    {
        n = get_int("Size: ");
    }
    while (n < 1);
<<<<<<< HEAD

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
=======
    return n;
}

// this is "void" because it does not have a return value
void print_grid(int size)
{
    for (int j = 0; j < size; j++)
    {
        printf("#");
    }
    printf("\n");
>>>>>>> af60e8cb895ce25dc32e9d7723ef243229eb0b75
}