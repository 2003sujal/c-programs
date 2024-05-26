#include<stdio.h>
struct stu {
	 int n; 
};
main ()
{
struct stu s[3];
for(int i=0;i<3;i++)	
{
	printf("enter name  ");
	scanf("%d",&s[i].n);
}
}
