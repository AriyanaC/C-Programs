/******************************************************************************
WAPC to input an integer array from the user. 
Sort the array in descending order using insertion sort technique.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, temp;
    
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
    
    for(int i = 0; i < num; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < temp)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

    printf("\nSorted array in descending order: ");
    for (int k = 0; k < num; k++) 
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    return 0;
}