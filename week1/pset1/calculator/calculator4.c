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

    // using double the bits (64 vs 32) for the float integer, should be more precise
    double z = (double) x / (double) y;
    printf("%.20f\n", z);
}
// result:
// x: 1
// y: 3
// 0.33333333333333331483
// more precise than previous example but still not perfect