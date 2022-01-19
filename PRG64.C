#include<stdio.h>
int main ()
{
	char i , j,sp=35;
	clrscr();
	i=65;
	while ( i<=69)
	{
		j=1;
		while (j<=sp)
			printf(" ",j++);
		j=65;
		while( j<=i)
		{
			printf(" %c",j);
			j++;
		}
		printf("\n");
		i++;
		sp--;
	}
	getch();
	return 0;
}
