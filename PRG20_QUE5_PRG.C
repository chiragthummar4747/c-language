#include<stdio.h>
#include<conio.h>
void main()
{
	int sci,eng,guj,total,grad;
	float per ;
	clrscr ();
	printf("\n enter 3 velue");
	scanf("%d%d%d",&sci,&eng,&guj);
	if (sci<=35 || eng <= 35 || guj <= 35 )
	{
		printf ("\n fail");
	}
	else
	{
	total=sci+eng+guj;
	printf("\n%d total",total);
	per=total/3;
	printf("\n%fper",per);
	}
	if (per >=75)
	{
		printf("\n\t grade a");
	}
	else if(per>=60)
	{
		printf("\n\t grade b");
	}
	else if (per >=45)
	{
		printf("\n\t grade c");
	}
	else if (per >=35)
	{
		printf("\n\t grade d");
	}
	else
	{
		printf("\n\t fail");
	}

	getch();
}