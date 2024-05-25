/*  2. WAP TO FIND NUMBER OF EVEN AND ODD NUMBERS IN THE LIST */

#include <stdio.h>
int main()
{
    printf("enter the no. of numbers you want to list: ");
    int no;
    int Odd=0, Even=0;
    scanf("%d", &no);
    int s[no];
    printf("Start entering numbers:\n");
    for(int i = 0; i<no; i++)
    {
        scanf("%d", &s[i]);
        if((s[i]%2)!=0)
            Odd++;
        else
            Even++;
    }
    printf("There are %d odd and %d even numbers in above list.\n", Odd, Even);


}
