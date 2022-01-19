#include<stdio.h>
#include<conio.h>
void main()
{
	float unit,amount,a,b;
	clrscr();
	printf("\n enter unit=");
	scanf("%d",&unit);
	if (unit<=100)
	{
		amount=unit*0.6+50;
		printf("\n amount=%f",amount);
	}
	else if (unit<=100 && unit<=300)
	{
		amount=((unit-100)*0.8l)+(100*0.6);
		printf("\n amount=%f",amount);
	}
	else
	{

		a=((unit-200* 0.9)+(100*0.6+50)+(100*0.8));
		b=a*0.15   ;
		amount=a+b;
		printf("\n amount=%f",amount);
	}
	getch();
}