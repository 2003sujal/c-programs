#include<stdio.h>
int main ()
{
	int i,j,r=3,c=3,sum[r][c],a[r][c],b[r][c];
	printf("enter the elemnts of 1st %d by %d matrxuu\n",r,c);
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("\nenter the elemnts of 2nd %d by %d matrxuu\n",r,c);
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		sum[i][j]=a[i][j]+b[i][j];
		}
	}
		printf("the sum of the given matrxi is\n");
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
