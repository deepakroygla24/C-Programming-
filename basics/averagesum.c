#include<stdio.h>
int main()
{
	int marks[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			//printf(" (%d, %d) ",i,j);
			scanf("%d",&marks[i][j]);
		}
		//printf("\n");
	}
	int total_marks=0;
	float total_perc=0;
	for(int i=0;i<4;i++)
	{
		int sum=0;
		float perc=0.0;
		for(int j=0;j<4;j++)
		{
			sum+=marks[i][j];
		}
		perc=(sum/40.0)*100;
		//printf("student 1 %f",perc);
		total_marks+=sum;
		total_perc+=perc;
	}
	printf("average marks: %d\n",total_marks/4);
	printf("average percentage: %.2f",total_perc/4);
}