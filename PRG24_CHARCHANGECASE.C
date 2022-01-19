#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,a,A;
	clrscr();
	printf("\n enter char=");
	scanf("%c",&ch);
	if (ch>=65 && ch<=90 )
	{

		printf("\n\t  %c ",ch+32);
	}

	else
	{

		printf("\n\t  d%c",ch-32);
	}

	getch();
}


