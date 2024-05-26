#include<stdio.h>
#include<math.h>
#define pi 3.142
main()
{
	int i,degree;
	float x,num,den,term,sum =0             ;
	printf("enter the degree ");
	scanf("%d",&degree);
	x=degree*(pi/180);
	num=x;
	den=1;
	i=2;
	do{
		term=num/den;
		num=-num*x*x;
        den=den*i*(i+1);
		sum=sum+term;
		i=i+2;  
				
	}while(fabs(term)>=0.0001);
	printf("the sine of %d is %.3f\n",degree,sum);
	printf("the sine function of %d is %3.f\n",degree,sin(x));
	
}
