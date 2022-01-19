#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n enter a=");
	scanf("%d",&a);
	if (a>18)
	{
		printf("\n eligible voting");
	}
	else
	{


		printf("\n not eligible voting");
	}
	getch();
}