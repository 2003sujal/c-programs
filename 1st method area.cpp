#include<stdio.h>
float ar(float,float);
main ()
{
	float l, b;
 printf("enter the length ");
	scanf("%f",&l);
		printf("enter the breadth ");
	scanf("%f",&b);
	printf("the area of room is %f",ar(l,b));
}
  float ar (float l,float b)
{
	return l*b;
}
