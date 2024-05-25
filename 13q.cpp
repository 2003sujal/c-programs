/* 13. WAP TO CHECK IF THE GIVEN NUMBER IS PRIME OR NOT. */
#include <stdio.h>
int main()
{
    printf("Enter a number: ");
    int n, c = 0;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        if(n%i==0)
            c++;
    }

    if(c==2)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}
