#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr ();
	printf("\n enter a=");
	scanf("%d",&a);
	printf("\n enter b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;

	printf("\na=%d\nb=%d",a,b);
	getch();

}

