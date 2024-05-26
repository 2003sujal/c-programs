#include<stdio.h>
main()
{
	printf("enter two no: ");
	int n1,n2,j,i,c=0;
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
		
		{
			c++;
		}
	}
		if(c==2)
		printf("%d ",i);
		c=0;
	
}
}
