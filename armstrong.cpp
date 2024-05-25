#include<stdio.h>
main()
{	
	int n,a,d, sum=0;
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
	d=n%10;
	sum=sum+d*d*d;
	n=n/10;
		}
	if(sum==a)
		{
			printf("arnstrong");
		}
		else{
			printf("arm");
		}
	

	
	
}
