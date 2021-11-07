# include <stdio.h>
# include <stdlib.h>
//# include "../Include/basichead.h"

int Operators ();
int main ()
{
    int c,a;
    
    printf
        ("Select Option from below: \n\n \t1. Print Hello \n \t2. Operators\n \t3. Decimal to Binary\n\nEnter Option: ");
    scanf("%d", &c);
   switch (c)
   
   {
    case 1:
        printf("Hello!\n");
        break;
    case 2:
        Operators ();
        break;
    case 3:
        printf ("\nEnter Any Decimal number: ");
        scanf ("%d", &a);
        printf("\nBinary of Given Number %d = \n" , a);
        ConvertBinary (a);
        break; 
    default:
        printf("Wrong Option");
   }
   return 0;
}