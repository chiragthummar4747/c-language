#include<stdio.h>
#include<conio.h>
void main ()
{
	char i , j,c=65;
	clrscr();
	for (i=65 ; i<=69 ; i++)
	{
		for (j=65 ; j<=i ;j++)
		{
			printf("%c",c++);
		}
		printf("\n");
	}
	getch();
}
