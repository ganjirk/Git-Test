# include <stdio.h>
int calc ();
int main ()
{
    int c=0;
    printf("Select Option from below: \n\n \t1. Just print \n \t2. Calc\n\nEnter Option: ");
    scanf("%d", &c);
    if (c == 1)
    {
        printf("Hello Again\n");
    }
    else if (c == 2)
    {
        calc ();
    }
	else
	{
		printf("\nWrong option - Bye\n");
	}
	return 0;
}
