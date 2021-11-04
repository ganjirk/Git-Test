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
void unsigned concatenate(unsigned x, unsigned y) {
    unsigned prw = 10;
    printf("x value: ");
    scanf("%d",&x);
    printf("y value: ");
    scanf("%d",&y);
    while(y >= prw)
    {
        prw = prw*10;
    }
    z = x * prw + y;        
    printf("%d",z);
}
