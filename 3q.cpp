/*  3. WAP TO FIND SQUARE OF POSITIVE NUMBERS ONLY */
#include <stdio.h>
int main()
{
    int s[5], c=0, square[5];
    printf("enter 5  positive and negative numbers: \n");
    for(int i = 0; i<5; i++)
    {
        scanf("%d", &s[i]);
        if(i == 0)
            printf("The square of positive numbers are: \n");
        if(s[i]>0)
        {
            square[i] = (s[i] * s[i]);
            printf("%d\t", square[i]);
            c++;
        }
    }
}
