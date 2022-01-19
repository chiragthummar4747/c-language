#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr ();
	printf("\n enter a=");
	scanf("%d",&a);
	if (a%4)
	{
		printf("\n\t a is not  leap year");
	}
	else
	{
		printf("\n\t a is  leap year");

	}
	getch ();
}

