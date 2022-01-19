#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr ();
	printf("\n enter a=");
	scanf("%d",&a);
	printf("\n enter b=");
	scanf("%d",&b);
	if(a<b)
	{
		printf("\n\tb is largest");

	}
	else
	{
		printf("\n\t a is largest");
	}
	getch();
}