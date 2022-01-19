#include<stdio.h>
#include<conio.h>
void main ()
{
	char a;
	clrscr ();
	for (a=65 ; a<=90 ; a=a+2)
	{
		printf("\n %c",a);
		printf("___%d",a);
		printf("\n %c",a+33);
		printf("___%d",a+33);
	}
	getch();
}