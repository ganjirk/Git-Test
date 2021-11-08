#include "../Include/basichead.h"
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void
add (int a, int b)
{
  printf ("Added value = %d\n", a + b);
}

void
multiply (int a, int b)
{
  printf ("Multiplied value = %d\n", a * b);
}

void
substract (int a, int b)
{
  printf ("Substract value = %d\n", a - b);
}

void
division (int a, int b)
{
  printf ("Division value = %d\n", a / b);
}

unsigned
concatenate (unsigned a, unsigned b)
{
  int z;
  unsigned mv = 10;
  while (b >= mv)
    {
      mv = mv * 10;
    }
  z = a * mv + b;
  printf ("concatenated value: %d", z);
  return 0;
}

void
ConvertBinary (int a)
{
  int b[100] = { 0 };
  int i = 99;
  int y;
  do
    {
      b[i] = a;
      i--;
      a = a / 2;
    }
  while (a >= 2);
  b[i] = a;
  for (i = 0; i < 100; i++)
    {
      if (b[i] == 1)
	y = i;
    }
// removing leading zero's from array
  int nr = 100 - y;		// new range for array without leading zero's
  int na[nr];
  for (i = 0; i < nr; i++)
    {
      na[i] = b[y];
      y++;
      //  printf ("%d\t", na[i]);
    }
  for (i = 0; i < nr; i++)	// Converting to Binary
    {
      if (na[i] % 2 == 0)
	na[i] = 0;
      else
	na[i] = 1;
      printf ("%d ", na[i]);
    }
}

void
numguess (void)
{
  int n=10, count = 0, rn, g;
  printf ("\nGuess a number between 1-10 - Max tries = 3\n\n");
  srand ((unsigned int) time (NULL));
  rn = rand () % n;
    do {
        if (count >= 3) {
        printf ("\nExceeded max tries = %d - Lost the Game\n", count);
        break;
        }
        printf("Enter guessed option: ");
        scanf("%d", &g);
        if (g > rn) {
        count++;
        printf("Try Lower number!\n");
        }
        else if (g < rn) {
        count++;
        printf("Try Higher Number!\n");
        }
        else {
        count++;
        printf("Guessed correct number: %d in %d attempts\n", rn, count);
        }
    } while (g != rn);
}