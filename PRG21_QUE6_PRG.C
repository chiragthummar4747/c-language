#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr ();
	printf("\nenter 2 velue ");
	scanf("%d%d",&x,&y);
	if (x<=2000 || x>=3000)
	{
		printf("\n x ");
	}
	else
	{
		printf("\n null");
	}
	if (y>=100 && y <=500)
	{
		printf("\n y");
	}
	else
	{
		printf("\n null");
	}
	getch();
}
