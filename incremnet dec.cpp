#include<stdio.h>
main ()
{

int a=2,b=3,c;
a=(b++)+(++b)+a;
c=a>b?a:b;
b=(a++)+(b--)+a;
c=c++*b--;
printf("%d %d %d ",a,b,c);
}
