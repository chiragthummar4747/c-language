#include<stdio.h>
#include<conio.h>
void main ()
{
	int  i , j,c=1,k;
	clrscr();
	i=1;
	while( i<=5)
	{
		k=i;
		while(k<=35)
			printf(" ",k++);
		j=1;
		while( j<=i )
		{
			printf(" %d",c++,j++);
		}
		printf("\n");
		i++;
	}
	getch();
}
