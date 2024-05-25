/* 4. WAP TO TAKE ARRAY OF 10 INTEGERS AND ACCEPT VALUES INTO IT. SORT THE ARRAY IN DESCENDING ORDER. */
#include <stdio.h>
int main()
{
    int listOfNumbers[10], temp;
    printf("Start entering numbers:\n");
    for(int i = 0; i<10; i++)
        scanf("%d", &listOfNumbers[i]);

    printf("Before sorting: \n");
    for(int i = 0; i<10; i++)
        printf("%d\t", listOfNumbers[i]);
    printf("\nAfter sorting: \n");
    for(int i = 0; i<10; i++)
    {
        for(int j = 0; j<9; j++)
        {
            if(listOfNumbers[i]>listOfNumbers[j])
            {
               temp = listOfNumbers[i];
               listOfNumbers[i] = listOfNumbers[j];
               listOfNumbers[j] = temp;
            }
        }
    }
    for(int i = 0; i<10; i++)
        printf("%d\t", listOfNumbers[i]);
}
