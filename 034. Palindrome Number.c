/*******************************************************************************
WAPC to input a positive integer from the user. 
Check and print if the number is palindrome or not.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, originalNumber, reversedNumber = 0, remainder;
    
    printf("Enter the number:");
    scanf("%d", &n);
    
    originalNumber = n;
    
    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    
    if(originalNumber == reversedNumber)
    {
        printf("%d is a palindrome number.\n", originalNumber);
    }
    else
    {
        printf("%d is not a palindrome number.\n", originalNumber);
    }
    return 0;
}
