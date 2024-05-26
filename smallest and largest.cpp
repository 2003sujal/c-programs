#include<stdio.h>
void sl(int a,int b);
main()
{
	int a,b;
	printf("enter two num");
	scanf("%d %d",&a,&b);
	sl(a,b);
//	return 0;
}
void sl(int a,int b)
{
if (a>b)
{
printf("%d is largest and %d is smallest",a,b);
}
else
{

printf("%d is largest and %d is smallest",b,a);	

}
}
	

