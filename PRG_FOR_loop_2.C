#include<stdio.h>
#include<conio.h>
void main ()
{
	int n,i;
	clrscr ();
	printf("\n enter n =");
	scanf("%d",&n);
	for (i=n ; i>=1 ;i--)
	{
		printf("\n %d ",i);
	}
	getch();
}