#include <cs50.h>
#include <stdio.h>

// this answer works but not completely, it rounds up, we need to truncate.

int main(void)
{
  // Prompting the user for a starting # of llamas
  int start;
  do
  {
    start = get_int("Start size: ");
  } while (start < 9);
  
  // Prompting them for an ending # of llamas
  int end;
  do
  {
    end = get_int("End size: ");
  } while (start > end);
  
  // How many years will it take to get to the goal? (loop)
  int years = 0;
  while (start < end)
  {
    start += start / 12;
    years++;
  }
  printf("Years: %i\n", years);
  // Every year, 1/3 of our current llamas are born; 1/4 pass away

  // need to make sure that we truncate or round down vs. round up
}