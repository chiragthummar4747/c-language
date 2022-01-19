#include<stdio.h>
#include<conio.h>
void main()
{
	int year ;
	clrscr();
	printf("\n enter year=");
	scanf("%d",&year);
	year%4?printf("\nnot leap yera"):printf("\n  leap year");
	getch();
}