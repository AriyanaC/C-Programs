/******************************************************************************
WAPC to input an integer array from the user. 
Display the frequency of every element in the array.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, count = 0, currentElement;
    
    printf("Enter the number of elements in the  array:");
    scanf("%d", &num);
    
    int arr[num], freq[num];   //freq[] stores the frequency of elements
    
    for (int i= 0; i < num; i++)
    {
        printf("\nEnter an integer:");
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    
    for(int i = 0; i < num; i++)
    {
        if(freq[i] != 0)
        {
            currentElement = arr[i];
            count = 1;
            for (int j = i + 1; j < num; j++)
            {
                if(arr[j] == currentElement)
                {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }

    printf("\nFrequency of the elements: ");
    for (int k = 0; k < num; k++) 
    {
        if(freq[k] != 0)
        {
            printf("\n%d occurs %d times.", arr[k], freq[k]);
        }
    }
    return 0;
}