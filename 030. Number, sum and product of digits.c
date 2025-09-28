/******************************************************************************
WAPC to input a positive integer from the user. 
Find and display:
1.the number of digits in the number
2.sum of the digits of the number
3.product of the digits of the number.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, sumOfDigits = 0, count = 0, productOfDigits = 1, digit;
    
    printf("Enter a number:");
    scanf("%d", &num1);
    
    while (num1 != 0)
    {
        digit = num1 % 10;
        sumOfDigits += digit;
        productOfDigits *= digit;
        num1 /= 10;
        count++;
    }
    printf("\nThe number of digits is: %d", count);
    printf("\nThe sum of digits is: %d", sumOfDigits);
    printf("\nThe product of digits is: %d", productOfDigits);
    return 0;
}