/******************************************************************************
WAPC to initialize the array with 10 integers of your choice. 
Input an integer from the user. 
Check and display whether or not the input entered by the user is present in the array or not. 
Use the binary search technique.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, min, mid, left = 0, right = 9, flag = 0;
    int arr[10];
    
    for(int i = 0; i < 10; ++i)
    {
        printf("\nEnter an integer: ");
        scanf("%d",&arr[i]);
    }
    
    printf("\nEnter the value to be searched:");
    scanf("%d", &num1);
    
    for(int i = 0; i < 10; ++i)
    {
        min = i;
        for(int j= i + 1; j<10; j++)
        {
            if( arr[j] < arr[min] )
            {
                min = j;
            }
            
            int t = arr[i];
            arr[i] = arr[min];
            arr[min] = t;
        }
    }
    
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(num1 == arr[mid])
        {
            flag = 1;
            break;
        }
        else if(arr[mid] > num1)
        {
            right = mid - 1;
        }
        else if (arr[mid] < num1)
        {
            left = mid + 1;
        }
    }
    
    if(flag == 1)
    {
        printf("\nThe element is found in index %d", mid);
    }
    else
    {
        printf("\nThe element is not found");
    }

    return 0;
}