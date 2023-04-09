#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string fn = get_string("First Name: ");
  string ln = get_string("Last Name: ");
  int age = get_int("Age: ");
  string pn = get_string("Phone Number: "); //might be better for it to be a string since it may have hyphens or +1

  printf("Age is %i. Name is %s %s. Phone number is %s.\n", age, fn, ln, pn);
}