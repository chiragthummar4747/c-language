#include<stdio.h>
#include<conio.h>
void main ()
{
	int i,eng[3],guj[3],sci[3],total[3],total1[3];
	float per[3];
	clrscr();
	for (i=0;i<3;i++)
	{
		printf("\nenter mark for student %d \n",i+1);
		printf("enter eng[%d]",i);
		scanf("%d",&eng[i]);
		printf("enter guj[%d]",i);
		scanf("%d",&guj[i]);
		printf("enter sci[%d]",i);
		scanf("%d",&sci[i]);
	}
	getch();
	clrscr();
	printf("\neng\tguj\tsci\ttotal\tper\t\tgread");
	printf("\n----------------------------------------------------");

	for(i=0;i<3;i++)
		if(eng[i]<35 && guj[i]<35 && sci[i]<35)
		{
			printf("\n fail");
		}
		else
		{
			printf("\n %d ",eng[i]);
			printf("\t %d ",guj[i]);
			printf("\t %d ",sci[i]);



			total[i]=eng[i]+guj[i]+sci[i];
			printf("\t %d",total[i]);

			per[i]=total[i]/3;
			printf("\t %f",per[i]);
			if(per[i]>=75)
				printf("\tA");
			else if(per[i]>=60)
				printf("\tB");
			else if(per[i]>=45)
				printf("\tC");
			else if(per[i]>=35)
				printf("\tD");
			else
				printf("\t fail");
		}
		printf("\n----------------------------------------------------");
		total1[i]=eng[i]+eng[3];
		printf("\n%d",total1[i]);



	getch();

}




















