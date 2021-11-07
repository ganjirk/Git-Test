// Basic Header File
# include <stdio.h>

void add(int a, int b)
{
    printf("\nAdded value %d + %d = %d\n", a,b, a + b);
}
void multiply(int a, int b)
{
    printf("\nMultiplied value %d * %d = %d\n", a,b, a * b);
}
void substract(int a, int b)
{
    printf("\nSubstract value %d - %d = %d\n", a,b, a - b);
}
void division(int a, int b)
{
    printf("\nDivision value %d / %d = %d\n", a,b, a / b);
}
unsigned concatenate(unsigned a, unsigned b) {
    int z;
    unsigned mv = 10;
    while(b >= mv)
    {
        mv = mv*10;
    }
    z = a * mv + b;        
    printf("concatenated value: %d",z);
return 0;
}
void ConvertBinary (int a)
{
   int b[100] = {0};
    int i=99;
    int y;
    do  {
        b[i] = a;
        i--;
        a = a/2;
    } while (a >= 2);
    b[i] = a;
    for(i=0; i<100; i++)
    {
     if( b[i] == 1)
     y = i;
    }
// removing leading zero's from array
int nr = 100-y; // new range for array without leading zero's
int na[nr];
    for(i=0; i<nr; i++)
    {
        na[i] = b[y];
        y++;
      //  printf ("%d\t", na[i]);
    }
    for (i=0;i<nr;i++) // Converting to Binary
    {
    if (na[i]%2 == 0)
    na[i] = 0;
    else
    na[i] = 1;
    printf ("%d ", na[i]);
    }
}