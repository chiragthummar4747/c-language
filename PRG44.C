#include<stdio.h>
#include<conio.h>
void main ()
{
	float a,b=0.5 , c=0.5 , d;
	clrscr ();
	for (a=0.5 ; a<=10 ; a++)
	{
		b=a+b;
		printf("\n %f ",b);
	}
	getch();
}