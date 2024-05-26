#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],b[3][3],c[3][3],i,j;
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
printf("Enter data for first matrix");
scanf("%d",&a[i][j]);
}}
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
printf("\nEnter data for second matrix\n");
scanf("%d",&b[i][j]);
}}
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];
}}
for (i=0;i<3;i++)
{
printf("\n");
for (j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
}}
getch();
}

