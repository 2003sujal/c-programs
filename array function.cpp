/*#include <stdio.h>
void getarray(int arr[])
{
printf("Elements of array are : ");
for(int i=0;i<5;i++)
{
printf("%d ", arr[i]);
}
}
void getarray(int arr[]);
int main()
{
int arr[5]={45,67,34,78,90};
getarray(arr);
return 0;
}*/
#include <stdio.h>
const int M = 3;
const int N = 3;
void print(int arr[M][N])
{
int i, j;
for (i = 0; i < M; i++)
for (j = 0; j < N; j++)
printf("%d ", arr[i][j]);
}
void print(int arr[M][N]);
int main()
{
int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
print(arr);
return 0;
}

