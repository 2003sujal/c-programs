#include<stdio.h>
main ()
{
	int m,n,o,p,i,j,k,sum=0;
	scanf("%d %d %d %d",&m,&n,&o,&p);
		int a[m][n],b[o][p],mul[m][p];
	if(n!=o)
	{
		printf("arguement error");
	}
	else{
		//input section
			printf("enter the elemsents of 1st %d X %d matrix;\n",m,n);
		 for(i=0;i<m;i++)
		 {
		 	for(j=0;j<n;j++)
		 	{
		 		scanf("%d",&a[i][j]);
			 }
		 }	printf("\n");
		 for(i=0;i<m;i++)
		 {
		 	for(j=0;j<n;j++)
		 	{
		 		printf("%d\t",a[i][j]);
			 }
			 printf("\n");
		 }		 	 
		 printf("enter the elemsents of 2nd %d X %d matrix;\n",o,p);
		 for(i=0;i<o;i++)
		 {
		 	for(j=0;j<p;j++)
		 	{
		 		scanf("%d",&a[i][j]);
			 }
		 }printf("\n");
		 for(i=0;i<o;i++)
		 {
		 	for(j=0;j<p;j++)
		 	{
		 		printf("%d\t",a[i][j]);
			 }
			 printf("\n");
		 }		 	 
		
		 	//process
		 	 for(i=0;i<m;i++)
		 {
		 	for(j=0;j<p;j++)
		 	{
		 	
		 		for(k=0;k<n;k++)
			 {
			 sum=sum+a[i][k]*b[k][j];
	       	}
		 mul[i][j]=sum;
		 	sum=0;
	     }  
	     } 
	     //output
	      printf("\n");
	     
	     printf("multiplied ans");printf("\n");
	      for(i=0;i<m;i++)
		 {
		 	for(j=0;j<p;j++)
		 	{
		 		printf("%d\t",mul[i][j]);
			 }
		  printf("\n");
	     } 
	     }
      	}

	
