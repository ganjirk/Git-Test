# include <stdio.h>
int Operators ();
int main ()
{
    int c=0;
    printf("Select Option from below: \n\n \t1. Just print \n \t2. Operators\n\nEnter Option: ");
    scanf("%d", &c);
    if (c == 1)
    {
        printf("Hello Again\n");
    }
    else if (c == 2)
    {
        Operators ();
    }
	else
	{
		printf("Wrong option - Bye");
	}
	return 0;
}
