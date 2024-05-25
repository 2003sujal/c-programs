/* 5. WAP TO SEARCH AN ELEMENT IN AN ARRAY USING LINEAR SEARCH (SEQUENTIAL SEARCH) */
#include <stdio.h>
int main()
{
    int listOfNumbers[10], position=0, positionOf, j;
    printf("enter 10 elements of array: \n");
    for(int i = 0; i<10; i++)
        scanf("%d", &listOfNumbers[i]);

    printf("Whose position do you want? ");
    scanf("%d", &positionOf);

    for( j = 0; j<10; j++)
    {
        if(listOfNumbers[j] == positionOf)
            position = j+1;
      }
    if(position == 0)
        printf("Sorry, given element doesn't exist in array!\n");
    else
        printf("The position of %d in array is seat no. %d.\n", positionOf, position);
  
}
