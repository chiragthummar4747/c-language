#include<stdio.h>
#include<conio.h>
void main ()
{
	char i , j,c=65;
	clrscr();
	i= 65;
	while( i<=69 )
	{
		j=1;
		while(j<=35)
			printf(" ",j++);
		j=65;
		while ( j<=i )
		{
			printf(" %c",c++,j++);
		}
		printf("\n");
		i++;
	}
	getch();
}
