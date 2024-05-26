#include<stdio.h>
main()
{
	int i,j;
	char str[]="nepal";
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
		printf("%c",str[j])	;
		}
		printf("\n");
	}

}
/*nepal
  nepa
  nep
  ne
  n*/
