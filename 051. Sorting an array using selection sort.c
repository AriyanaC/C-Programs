/******************************************************************************
WAPC to input an integer array from the user. 
Sort the array in ascending order using selection sort technique.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, minimumIndex, temp;
    
    printf("Enter the number of elements in the  array:");
    scanf("%d", &num);
    
    int arr[num];
    
    for (int i= 0; i < num; i++)
    {
        printf("\nEnter an integer:");
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    
    for (int i = 0; i < num; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for(int i = 0; i < num - 1; i++)
    {
        minimumIndex = i;
        for (int j = i + 1; j < num; j++)
        {
            if(arr[j] < arr[minimumIndex]) 
            {
                minimumIndex = j;
            }
        }
        temp = arr[minimumIndex];
        arr[minimumIndex] = arr[i];
        arr[i] = temp;
    }

    printf("\nSorted array in ascending order: ");
    for (int k = 0; k < num; k++) 
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    return 0;
}