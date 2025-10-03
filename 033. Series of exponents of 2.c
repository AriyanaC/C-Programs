/******************************************************************************
WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms. Here, ‘n’ is user input.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, currentNumber=1;
    
    printf("Enter the number of terms:");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
    {
        printf("\n%d", currentNumber);
        currentNumber *= 2;
    }
    return 0;
}