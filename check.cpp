#include<stdio.h>
main()
{
	int i,j,x=1;
	for(i=1;i<=5;i++)
	{
		
		for(j=1;j<=i;j++)
		{
			
			printf("%d\t",x);
		x++	;
		}	//x++;
		printf("\n");
	}
}
/*1  
  23
  456
  78910
  1112131415*/
	
