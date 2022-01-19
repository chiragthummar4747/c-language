#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum=0,avg;
	clrscr();
	for (i=0;i<5;i++)
	{
		printf("\n enter number a[ %d ]",i);
		scanf("%d",&a[i]);
	 }
	 for(i=0;i<5;i++)
	 {
		sum=sum+a[i];
		avg=sum/2;
	 }
	 printf("\ntotal %d ",sum);
	 printf("\navg %d ",avg);
	 getch();
}