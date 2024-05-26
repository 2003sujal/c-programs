#include <stdio.h>
int main()
{
// Declare the variables
int num;
char ch;
float f;
// Input the integer
printf("Enter the integer: ");
scanf("%d", &num);
// Output the integer
printf("\nEntered integer is: %d", num);
//For input Clearing buffer
//while((getchar()) != '\n');
// Input the float
printf("\n\nEnter the float: ");
scanf("%f", &f);
printf("\nEntered float is: %f", f);
}
