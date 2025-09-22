/******************************************************************************
WAPC to input a 4-digit number and find the sum and product of the rightmost and leftmost digits.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, first, last;

    printf("Enter a 4 digit number:");
    scanf("%d", &num);
    
    first = num / 1000;
    last = num % 10;
   
    printf("The sum of the leftmost and rightmost digits is %d", (first + last));
    printf("\nThe product of the leftmost and rightmost digits is %d", (first * last));
    return 0;
}