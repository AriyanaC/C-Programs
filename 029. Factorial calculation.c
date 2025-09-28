/******************************************************************************
WAPC to input a positive integer from the user. 
Find and display the factorial of the number.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, factorial = 1;
    
    printf("Enter the number whose factorial is to be calculated:");
    scanf("%d", &num1);
    
    for (int i= 1; i <= num1; i++)
    {
        factorial *= i;
    }
    printf("Factorial %d! = %d", num1, factorial);
    return 0;
}