#include <stdio.h>
#include "basichead.h"
#include <stdlib.h>
int main ()
{
  int c, a, b;
  printf
    ("Enter the choice: \n 1. Add \n 2. Multiply\n 3. Substract\n 4. Division\n");
  scanf ("%d", &c);
  if (c > 4)
  {
      printf ("Wrong Selection\n");
      exit;
  }
  else if (c < 5)
  {
      printf ("Enter First number: ");
      scanf ("%d", &a);
      printf ("Enter Second number: ");
      scanf ("%d", &b);
      printf ("C value%d\n", c);
  }
  if (c == 1)
  {
    add (a, b);
  }
  else if (c == 2)
  {
    multiply (a, b);
  }
  else if (c == 3)
  {
      substract (a, b);
  }
  else if (c == 4)
  {
    division (a, b);
  }
  return 0;
}