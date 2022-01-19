#include<stdio.h>
#include<conio.h>
void main ()
{
	int a[5][5],b[5][5],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\n a[%d][%d] ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t %d ",a[i][j]);
		}

		printf("\n");
	 }
	getch();
}
      //	printf("