
#include<stdio.h>
#include<conio.h>
void main()
{
	float income,tax,z,a,b,c;
	clrscr();
	printf("\n enter income=");
	scanf("%f",&income);
	if (income<2500)
	{
		printf("\n\t not ebale of tax");
	}
	else if (5000<income && 2500>income)
	{

	b=(income-2500)*0.1;
		printf("\n\t %f b ",b);
		printf("\n\tebal for 10%tax");
	}
	else if (10000<income && 5000 >income)
	{
	z=(income-5000)*0.2+2500*0.1;
		printf("\n\tz %f ",z);
		printf("\n\tebal for 20%tax");
	}
	else
	{
	z =( income -10000)*0.3+2500*0.1+5000*0.2;
		printf("\n\t%f z",z);
		printf("\n\tebal for 30%tax");
	}
	getch();



}




