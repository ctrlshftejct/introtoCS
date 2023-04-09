#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // explaining how to deal with numbers longer than 2billion
    long x = get_long("x: ");
    long y = get_long("y: ");
    // long integers can count up to 9 quintillion, but still finite

    //floating integers (decimal points)
    //since x and y are still not floats, need to specify them as such before printing
    float z = (float) x / (float) y;
    printf("%f\n", z);
}