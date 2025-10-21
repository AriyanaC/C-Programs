/******************************************************************************
WAPC to input an integer array from the user. 
Remove all duplicates and display the resultant array.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, is_duplicate = 0, new_size = 0;
    
    printf("Enter the number of elements in the  array:");
    scanf("%d", &num);
    
    int arr[num], temp_arr[num];
    
    for (int i= 0; i < num; i++)
    {
        printf("\nEnter an integer:");
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < num; i++)
    {
        is_duplicate = 0;
        for (int j = 0; j < new_size; j++)
        {
            if (arr[i] == temp_arr[j])
            {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) 
        {
            temp_arr[new_size] = arr[i];
            new_size++;
        }
    }
    
    printf("\nArray with duplicates removed: ");
    for (int k = 0; k < new_size; k++) 
    {
        printf("%d ", temp_arr[k]);
    }
    printf("\n");
    return 0;
}