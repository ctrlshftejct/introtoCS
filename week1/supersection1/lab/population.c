#include <cs50.h>
#include <stdio.h>

int main(void)
{
  double starting, final, current, new, add_pop, new_pop;
  
  starting = 10;
  final = 11;

  do
  {
    add_pop = starting + (starting / 3);
    new_pop = add_pop - (starting / 3);
  } while (new_pop<final);
  printf("%f\n", new_pop);
}