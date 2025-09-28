/******************************************************************************
WAPC to display the sum of the first ‘n’ odd numbers and the sum of the first 
‘n’ even numbers separately. Here, ‘n’ is the user input.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, sumOfOddNumbers = 0, sumOfEvenNumbers = 0;
    
    printf("Enter a number:");
    scanf("%d", &n);
    
    for (int i= 1; i<=n; i++)
    {
        sumOfEvenNumbers += (2*i);
        
        sumOfOddNumbers += (2*i - 1);
    }
    
    printf("\nThe first of the first %d odd natural numbers is: %d", n, sumOfOddNumbers);
    printf("\nThe first of the first %d even natural numbers is: %d", n, sumOfEvenNumbers);
    return 0;
}