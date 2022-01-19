#include<stdio.h>
#include<conio.h>
void main ()
{
	char i;
	clrscr()  ;
	for (i= 65;i<=90;i+=4)
	{
		printf("\n %c",i)  ;
		printf("\n %c",i+34) ;
	}
	getch();
}