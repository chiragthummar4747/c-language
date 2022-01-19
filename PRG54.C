#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,j,k,n=1,z;
	clrscr();
	for (i=1 ; i<=5 ; i++)
	{
		for (k=i ; k<=35 ; k++)
		{
			printf(" ");
		}
		for (z=1;z<=n;z++)
		{
			printf("*");
		}
		z=1;
		n=n+2;
		printf("\n");
	}
	getch();
}