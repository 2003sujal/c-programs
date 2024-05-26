#include<stdio.h>
main()
{
 int a, b;
 double c = 123.55667788;
 char str[]= "I enjoy programming";
 
 scanf("%2d %2d",&a ,&b);
 printf("a=%5d\n b=%-2\d", a, b);
 printf("\n%8.10s", str);
 printf("\n%8.3f",c);
 printf("\n%-10.6f",c);
}
