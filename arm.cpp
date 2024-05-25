#include<stdio.h>
main()
{
	int n,a,sum=0,d;
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
	d=n%10;	;
	sum=sum+d*d*d;
	n=n/10;
	}
	if(sum==a)
    {
	printf("arm");
    }
    else
    {
    	printf("nop");
	}

}	
	
