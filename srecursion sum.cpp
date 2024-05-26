#include<stdio.h>
int sumNUM(int);
int main()
{
    int n;
    printf("enter multidigit number::");
    scanf("%d",&n);
    sumNUM(n);
    printf("SUM:%d",sumNUM(n));
    
}
int sumNUM(int n)
{  
    int sum;
    if(n<10)
    {
        return n;
        
    }
    else
    {
        sum=0;
        while(n!=0)
        {
            sum=sum+n%10;
            n=n/10;
        }
        
    }
    return sumNUM(sum);
}
