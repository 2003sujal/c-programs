#include<stdio.h>
#include<string.h>
int main()
{
	//gets(s1);
	char s1[30],s2[20];
		scanf("%s",&s1);
		//	scanf("%s",&s2);
	strcpy(s2,s1);
	strrev(s1);
	if(strcmp(s1,s2)==0)
	{
		printf("pal");
		
	}
	else
	{
		printf("nop");
		
	}
	return 0;
}
