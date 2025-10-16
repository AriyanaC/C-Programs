/******************************************************************************
WAPC to input an array of ‘n’ elements from the user. 
Find and display the second highest element of the array.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, maximum, secondMaximum;
    printf("Enter the total number of elements:");
    scanf("%d", &n);
    float arr[n];
    
    for(int i=0; i<n; i++)
    {
        printf("\nEnter a number:");
        scanf("%f", &arr[i]);
    }
    
    maximum = arr[0];
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    
    secondMaximum = arr[0];    
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] > secondMaximum && arr[i]< maximum)
        {
            secondMaximum = arr[i];
        }
    }

    printf("\nThe second maximum element in the array is %d",secondMaximum);
    return 0;
}