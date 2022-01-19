#include<stdio.h>
#include<conio.h>
void main ()
{
	int income ;
	float tax;
	clrscr ();
	printf("\n enter income =");
	scanf("%d",&income);
	income<=2500?printf("\n nill "):
	income>=2500 && income <=5000? printf("\n tax %f",income-2500*0.1):
	income>=5000 && income <=10000? printf("\n tax %f",income-5000*0.2+250):
	income>=10000? printf("\n tax %f ",income-5000*0.3+1250);






	getch();
}