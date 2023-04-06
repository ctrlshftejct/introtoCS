#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // explaining how to deal with numbers longer than 2billion
    long x = get_long("x: ");
    long y = get_long("y: ");
    // long integers can count up to 9 quintillion, but still finite

    printf("%li\n", x + y);
    // had to change %i to %li since it's now a long integer.
    // see below for additional format code examples
}

// FORMAT CODES EXAMPLES IN C
// %c - character
// %f - floating point values (decimals)
// %i - integer
// %li - long integer
// %s - string