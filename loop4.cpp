#include<stdio.h>
main()
{
	int n,i,a=1,b=1,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("%d\t",a);
	c=a+b;
	a=b;
	b=c;
    }
}
