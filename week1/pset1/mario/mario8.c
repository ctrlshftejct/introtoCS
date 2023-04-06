#include <cs50.h>
#include <stdio.h>

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
    {
        n = get_int("Size: ");
    }
    while (n < 1);
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
}