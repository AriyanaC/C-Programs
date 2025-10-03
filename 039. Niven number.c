/*******************************************************************************
WAPC to input a positive integer. Check whether it is Niven or not.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, originalNum, sumDigits = 0, remainder;
    
    printf("Enter a positive number:");
    scanf("%d", &num);
    
    originalNum = num;
    
    while (num > 0)
    {
        remainder = num % 10;
        sumDigits += remainder;
        num /= 10;
    }
    
    if (originalNum % sumDigits == 0) 
    {
        printf("%d is a Niven (Harshad) number.", originalNum);
    } 
    else 
    {
        printf("%d is not a Niven (Harshad) number.", originalNum);
    }
    
    return 0;
}