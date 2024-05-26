#include<stdio.h>
int main ()
{
	int a[3],min,i;
	for(i=0;i<3;i++)
	{
	scanf("%d",&a[i]);	
	}
	//process
	min=a[0];
	for(i=0;i<3;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			
		}
	}
	
	printf("the smallest height=%d",min);
	return 0;
	
}
