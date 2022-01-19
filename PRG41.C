#include<stdio.h>
#include<conio.h>
void  main ()
{
	int a=1,b=1,c,i;
	clrscr();
	a=1;
	while( a<=10)
	{

		printf("\n%d",a);
		c=a+b;
		a=b;
		b=c;
	a++;
	}
	getch();
}