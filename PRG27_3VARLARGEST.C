
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n enter 3 velue =");
	scanf("%d%d%d",&a,&b,&c);
	a>b && a>c?printf("\n a "):b>c? printf("\n b "): printf("\n c");

	getch();
}