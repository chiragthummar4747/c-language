#include<stdio.h>
#include<conio.h>
void main()
{
	int salary,z;
	float hra,da;
	clrscr();
	printf("\n enter salary=");
	scanf("%d",&salary);
	if  (salary<=5000)
	{
		hra=salary*0.08;
		da=salary*0.2;
		printf("\nhra:%f\nda:%f",hra,da);
	}
	else if (salary<=10000)
	{
		hra=salary*0.12;
		da=salary*0.3   ;
		printf("\nhra:%f\nda:%f",hra,da);
	}
	else if (salary<=15000)
	{
		hra=salary*0.15  ;
		da=salary*0.4     ;
		printf("\nhra:%f\nda:%f",hra,da);
	}
	else
	{
		hra=salary*0.20;
		da=salary*0.5 ;
	}
	z=salary+hra+da;
	printf("\n z=%d",z);
		     d

	getch();
}

