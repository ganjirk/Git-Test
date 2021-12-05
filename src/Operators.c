# include "../Include/basichead.h"
# include <stdio.h>
# include <stdlib.h>

int
Operators ()
{
  int c, a, b, sum;
  float r;
  printf
    ("Select Option: \n\n"
     "\t 1. Add\n"
     "\t 2. Multiply\n"
     "\t 3. Substract\n" "\t 4. Division\n" "\t 5. concatenate\n\n Enter Choice: ");
  scanf ("%d", &c);
  if (c < 6)
    {
    switch (c)
	{
	case 1:
      add ();
	  break;
	case 2:
	  printf ("\nEnter First number: ");
      scanf ("%d", &a);
      printf ("Enter Second number: ");
      scanf ("%d", &b);
	  multiply (a, b);
	  break;
	case 3:
	  substract (a, b);
	  break;
	case 4:
	  division (a, b);
	  break;
	case 5:
	  concatenate (a, b);
	  break;
	default:
	  printf ("\nWrong Selection - Bye\n");
	}
      return 0;
    }
}