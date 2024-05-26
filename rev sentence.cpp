#include<stdio.h>
 void reverse();
main ()
{
	printf("enter a sentecden");
	reverse();
	
}
void reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	reverse();
	printf("%c",c);
}
