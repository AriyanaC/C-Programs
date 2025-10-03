/*******************************************************************************
WAPC to input a positive integer. Check whether it is Happy or not.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, originalNum, tempNum, sum = 0, digit;
    
    printf("Enter a positive number:");
    scanf("%d", &num);
    
    originalNum = num;
    
    while (num != 1 && num != 4) 
    {
        sum = 0;
        tempNum = num;

        while (tempNum > 0) 
        {
            digit = tempNum % 10;
            sum += digit * digit;
            tempNum /= 10;
        }
        num = sum;
    }

    if (num == 1) 
    {
        printf("%d is a happy number.\n", originalNum);
    } 
    else 
    {
        printf("%d is not a happy number.\n", originalNum);
    }

    return 0;
}