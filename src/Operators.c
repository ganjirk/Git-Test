# include "../Include/basichead.h"
# include <stdio.h>
# include <stdlib.h>

int
Operators ()
{
  int c, a, b;
  float r;
  printf
    ("Select Option: \n\n"
     "1. Addition\n"
     "2. Multiply\n"
     "3. Substract\n" "4. Division\n" "5. concatenate\n\n Enter Choice: ");
  scanf ("%d", &c);
  if (c < 6)
    {
      printf ("\nEnter First number: ");
      scanf ("%d", &a);
      printf ("Enter Second number: ");
      scanf ("%d", &b);
      switch (c)
	{
	case 1:
      add (a, b);
	  break;
	case 2:
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