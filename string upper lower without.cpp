#include<stdio.h>
main ()
{
	int i,n,c=0;
	char str1[30], str2[30];
	printf("enter the length of the srtring you are going to enter");
	scanf("%d",&n);
	printf("enter a string having the length %d as you desried so ",n);
scanf("%s",&str1);
	for(i=0;i<=n;i++)
	{
		if (str1[i]!='\o')
		c++;
		else
		break;
	}
	for(i=c-1;i>=0;i--){
	
	printf("%c",str1[i]);
}
}
		


