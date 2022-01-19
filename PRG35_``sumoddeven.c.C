#include<stdio.h>
#include<conio.h>
void  main ()
{
	int i,a=0 , c=0;
	clrscr();
	for (i=0 ; i<=10 ;i++)
	{
		if (i%2==0)
			a+=i;
		else
			c+=i;
	}
	printf("\n even =%d",a);
	printf("\n odd= %d",c);
	getch();
}