#include <cs50.h>
#include <stdio.h>

// Determine how long it takes for a population to reach a particular size.

// https://cs50.harvard.edu/college/2022/fall/labs/1/
// get starting population of llamas
// get final population of llamas
// each year n / 3 new llamas are born
// each year n / 4 llamas pass away.
// how many years until you reach final population of llamas?

int main(void)
{
  // get starting population of llamas
  double sp, fp, np;
  do
  {
    sp = get_double("Starting Llama Population: ");
  } 
  while (sp < 1);
 // get final population of llamas
  do
  {
    fp = get_int("Final Llama Population: ");
  }
  while (fp < sp);


  for (np = sp); 

  double cp = sp;
  // each year n / 3 new llamas are born
  do
  {
    double np = cp + (cp/3) - (cp/4)
    do
    {
      double np = cp;
    } while (np <= fp);
    
  } while (cp <= fp);
  // current population of llamas
  // each year n / 4 llamas pass away.
  // how many years until you reach final population of llamas?

}