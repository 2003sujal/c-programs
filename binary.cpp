#include<stdio.h>
main()
{
	int n,d,so=0;
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%2;
		so=so*10+d;
		//=p*10;
		n=n/2;
		
	}
	printf("%d",so);
}
