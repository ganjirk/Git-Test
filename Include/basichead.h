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
    unsigned prw = 10;
    while(b >= prw)
    {
        prw = prw*10;
    }
    z = a * prw + b;        
    printf("concatenated value: %d",z);
return 0;
}
