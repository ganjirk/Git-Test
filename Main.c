# include <stdio.h>
int main ()
{
    int c=0;
    printf("Enter Option: \n \t1. Just print \n \t2. Calc\n\t");
    scanf("%d", &c);
    if (c == 1)
    {
        printf("Hello Again");
    }
    if (c == 2)
    {
        int calc ();
    }
	else
	{
		printf("Bye");
	}
	return 0;
}