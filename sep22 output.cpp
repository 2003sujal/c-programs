#include<stdio.h>
main ()
{
	char str1[50],str2[50]={'N','E','P','A','l'};
	//scanf("%[A-Z]",str1);
	printf("%s\n",str1);
	printf("%0.5s\n",str2);
	printf("%5.3s\n",str2);
	printf("%-0.3s\n",str2);
	return 0;
}
