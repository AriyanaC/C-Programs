/*******************************************************************************
WAPC to input a positive integer. Assume that the number is of 3 digits. 
Check and print if the number is Armstrong or not.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, originalNumber, result = 0, remainder;
    
    printf("Enter the number:");
    scanf("%d", &num);
    
    originalNumber = num;
    
    while (num != 0)
    {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }
    
    if(originalNumber == result)
    {
        printf("%d is a Armstrong number.\n", originalNumber);
    }
    else
    {
        printf("%d is not a Armstrong number.\n", originalNumber);
    }
    return 0;
}