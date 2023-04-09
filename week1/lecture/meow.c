#include <stdio.h>

int main(void)
{
    printf("meow\n");
    printf("meow\n");
    printf("meow\n");

    int counter = 3;
    {
        while (counter > 0)
        {
            printf("meow\n");
            counter--;
        }
        if (counter == 0)
        {
            printf("meow mix please deliver!\n");
        }
    }
}
