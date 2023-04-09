#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y') /* single quotes are for char's */
    {
        printf("Agreed.\n"); /* double quotes are for strings */
    }
    // else if (c == 'Y')
    // {
    //     printf("Agreed.\n");
    // }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
    // else if (c == 'N')
    // {
    //     printf("Not agreed.\n");
    // }
}