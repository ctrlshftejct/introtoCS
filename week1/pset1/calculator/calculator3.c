#include <cs50.h>
#include <stdio.h>

// showing floating-point imprecision
// just like we can't present as large a number as we want
// there is also a boundary on how precise our numbers can be
// shown below

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    //floating integers (decimal points)
    //since x and y are still not floats, need to specify them as such before printing
    float z = (float) x / (float) y;
    //we now want to show 20 digits
    printf("%.20f\n", z);
}
// result:
// x: 1
// y: 3
// 0.33333334326744079590
// why isnt it .3333333333333333?
// computer is approximating...why?
// floating-point imprecision
// the computer has decided how to represent it since out of digits
// can use a "double" to use 64 bits and be more precise.
