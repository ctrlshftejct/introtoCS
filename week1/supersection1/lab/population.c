#include <cs50.h>
#include <stdio.h>

int main(void)
{
  float starting, final, current, new, birth_rate, death_rate, pop;
  int y = 0;

  do
  {
    starting = get_float("Start Size: ");
  } while (starting < 4);
  do
  {
    final = get_float("End size: ");
  } while (final < starting);

  for (pop = starting; pop < final; pop = pop+new)
  {
    birth_rate = pop/3;
    death_rate = pop/4;
    new = (birth_rate - death_rate);
    y++;
  }
  printf("Years: %i\n", y);
}