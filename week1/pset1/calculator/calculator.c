#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", x + y);
}

// why might we not be able to count up to 4 billion? or add 2 billion and 2billion?
// RAM, must be a memory issue, not an infinite amount of 0's and 1's
// the highest most computers can count is 4 billion, but since they use half for negative numbers...
// it's around 2billion positive and 2billion negative numbers
// integer overflow