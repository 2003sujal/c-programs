#include<stdio.h>
int rec(int);

main()
{
 
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d\t",rec(i));
	}
	return 0;
}
int rec(int n)
{
n=1;
	{
		return 1+10*rec(n);
	}
}
