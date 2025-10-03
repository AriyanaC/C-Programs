/*******************************************************************************
WAPC to input a positive integer. Check whether the number is abundant or not.  
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, sumOfDivisors = 0;
    
    printf("Enter a positive number:");
    scanf("%d", &num);
    
    for (int i = 1; i < num; i++) 
    {
        if (num % i == 0) 
        {
            sumOfDivisors += i;
        }
    }
    
    if(sumOfDivisors > num)
    {
        printf("%d is an abundant number.\n", num);
    }
    else
    {
        printf("%d is not an abundant number.\n", num);
    }
    return 0;
    return 0;
}