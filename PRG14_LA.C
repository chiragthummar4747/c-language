#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\nenter 3 velus=");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("\n a is largest",a);
	}
	else if (b>c)
	{
		printf("\nb is largest",b);
	}
	else
	{
		printf("\nc is largest ",c);
	}
	getch();
}
