#include<stdio.h>
int fibo(int n);
main ()
{
	int n,i;
	printf("enter the  th term ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",fibo(i));
		
	}
	//return 0;
}
int fibo(int n)
{
	if(n==0)
	{
		return 0;
	}
	 else if(n==1)
	{
		return 1;
	}
	else {
		return fibo(n-1)+fibo(n-2);
	    }
}
