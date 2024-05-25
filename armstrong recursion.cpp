
/*Check whether the number is armstrong or not*/

#include <stdio.h>
#include <math.h>
int armstrong (int, int);
/*function declaration*/
int main()
 { int number, result;

int length = 0, temp;
printf("Enter an integer number");
scanf("%d", &number);

temp =number;
while (temp != 0)//
{
length++;
temp = temp / 10;
}
result = armstrong (number, length); /*function call*/
if (number==result)
printf("\nNumber is Armstrong");
else
printf("\nNumber is not Armstrong");
return 0;
/*calculates number of digits in a number*/
}
int armstrong (int number, int len) /*function definition*/{
/*function definition*/
if (number== 0){

return 0;}
else
/*base condition*/
{
return pow((number%10), len) + armstrong (number/10, len);
} 
}
