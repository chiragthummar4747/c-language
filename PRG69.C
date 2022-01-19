#include<stdio.h>
#include<conio.h>
void main ()
{
	int a[5],n=5,i,key,index=-1;
	clrscr();
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n enter delete=");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			index=i;
			break;
		}
	}
	if(index!=-1)
	{
		for(i=index;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
	printf("\n");
	for(i=0;i<n-1;i++)
		printf("\n a[%d] = %d",i,a[i]);
	}
	else
	{
	}


	getch();
}