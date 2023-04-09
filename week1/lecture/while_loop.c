#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int i=3;
  while (i>0)
  {
    printf("looping...\n");
    i--;
  }
  if (i==0)
  {
    printf("done looping.\n");
  }

  int i2 = 0;
  while (i2 < 3)
  {
    printf("looping again...\n");
    i2++;
  }
  // permanent while loop
  // while (true)
  // while (1) same as true
}

