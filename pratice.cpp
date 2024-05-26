#include<stdio.h>
int main ()
{
	int r=3,c=3,a[r][c],b[r][c],sum[r][c],i,j;
	printf("1st matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
		printf("2st matrix\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}	
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		//	scanf("%d",&a[i][j]);
		sum[i][j]=a[i][j]+b[i][j];	
			}	
	}
	
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");	
	}
	return 0;
}
//return 0;
