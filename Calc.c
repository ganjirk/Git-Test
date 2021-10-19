#include <stdio.h>
#include "basichead.h"
#include <stdlib.h>
int calc ()
{
  int c, a, b;
  printf
    ("Select Option: \n\n 1. Add \n 2. Multiply\n 3. Substract\n 4. Division\n\n Enter Choice: ");
  scanf ("%d", &c);
  if (c > 4)
  {
      printf ("Wrong Selection - Bye\n");
      exit;
  }
  else if (c < 5)
  {
      printf ("Enter First number: ");
      scanf ("%d", &a);
      printf ("Enter Second number: ");
      scanf ("%d", &b);      
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