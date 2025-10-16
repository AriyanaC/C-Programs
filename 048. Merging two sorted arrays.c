/******************************************************************************
WAPC to input two sorted integer arrays from the user. 
Merge these two arrays into a single sorted array.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int size1, size2;

    printf("Enter the size of the first sorted array: ");
    scanf("%d", &size1);
    int arr1[size1];
    
    printf("\nEnter the sorted elements for the first array:");
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the size of the second sorted array: ");
    scanf("%d", &size2);
    int arr2[size2];
    
    printf("\nEnter the sorted elements for the second array:");
    for (int i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    int size3 = size1 + size2;
    int arr3[size3];
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) 
    {
        if (arr1[i] <= arr2[j]) 
        {
            arr3[k] = arr1[i];
            i++;
        } 
        else 
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) 
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2) 
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("\nMerged and sorted array:\n");
    for (int l = 0; l < size3; l++) 
    {
        printf("%d ", arr3[l]);
    }
    
    printf("\n");

    return 0;
}