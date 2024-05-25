/* 1. WAP TO DISPLAY LARGEST OF GIVEN NUMBERS */
#include <stdio.h>
int main()
{
    int s[10], temp;
    printf(" enter numbers:\n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &s[i]);
    printf("\n");
	}
    for(int i = 0; i<10; i++)
    {
		 printf("%d\t", s[i]);
    printf("\n");
	}
    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<9; j++)
        {
            if(s[i]>s[j])
            {
               temp = s[i];
               s[i] = s[j];
               s[j] = temp;
            }
        }
    }
    printf("The largest of given numbers is %d.\n", s[0]);
}
