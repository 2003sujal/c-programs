/* 6. WAP TO FIND THE SUM OF N BELOW NUMBERS USING RECURSION. */
#include <stdio.h>

int sum(int numbers[], int k, int n)
{
    if(n<=0)
        return 0;
    return (numbers[n-1]+sum(numbers, k, n-1)); /*yo step ma last ma n = 0 vayesi 0 + agadi ko sum hunxa ra code le kaam sakxa.*/
}

int main()
{
    int n;
    printf("Enter no. of numbers you want to input: ");
    scanf("%d", &n);
    int numbers[n];
    printf("Start entering numbers: \n");
    for(int i = 0; i<n; i++)
        scanf("%d", &numbers[i]);

    int total = sum(numbers, 0 ,n);
    printf("The sum of array elememts is %d.\n", total);

}
