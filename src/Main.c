# include "../Include/basichead.h"
# include <stdio.h>
# include <stdlib.h>

int Operators ();

int main ()
{
    int c,a;
    
    printf
        ("           Welcome!!           \n "
        "\n ******** Press Q/q to quit the application ******** \n\n"
            "Select Option from below: \n\n \t1. Print Hello \n \t2. Operators\n \t3. Decimal to Binary\n \t"
        "4. Number Guess Game\n\n Enter Option: ");
    
    scanf("%d", &c);
   switch (c)
   {
    case 1:
        printf("\nHello!\n");
        break;
    case 2:
        Operators ();
        break;
    case 3:
        printf ("\nEnter Any Decimal number: ");
        scanf ("%d", &a);
        printf("\nBinary of Given Number %d = " , a);
        ConvertBinary (a);
        break; 
    case 4:
        numguess ();
        break;
    case 'Q':
    case 'q':
        exit(0);
    default:
        printf("Wrong Option");
   }
   return 0;
}