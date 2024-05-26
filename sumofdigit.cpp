#include<stdio.h>
main ()

{
		int n,s=0,sum=0,d,e;
	scanf("%d",&n);
//	int n,s=0,d;
	while(n!=0)
	
{
	d=n%10;
	s=s+d;
	n=n/10;
}
if(s>=10)
{
	while(s!=0)
	{
e=s%10;
sum=sum+e;
s=s/10;
    }
    printf("%d",sum);
}
else{
	printf("%d",s);
} 
}

