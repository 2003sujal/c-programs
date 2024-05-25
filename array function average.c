 #include<stdio.h>
 int avg(int []);
 main()
{
int marks[5]={10, 20, 30, 40,50} ;
 
printf("average=%d\n", avg(marks));
}
int avg(int marks[])
{
int average;
int i=0,sum=0;
for (i=0;i<5; i++)
{
sum=sum+marks[i];
}
average=sum/5;
return average;
}
