#include<stdio.h>
#include<conio.h>
void main ()
{
	int  a,b,c=1,k  ;
	clrscr();
	a=1;
	while( a<=6 )
	{
		k=a;
		while(k<=35)
			printf(" ",k++);
		b=1;
		while ( b<=a )

		{
			printf("%d",c++%2,b++);


		}
		printf("\n");
		a++;
	}
	getch();
}
