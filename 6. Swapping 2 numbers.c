/******************************************************************************
WAPC to input two numbers and swap them without using a third variable.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);

    num1= num1 + num2;
    num2= num1 - num2;
    num1 = num1 - num2;

    printf("The two numbers, after swapping is= %d , %d", num1, num2);

    return 0;
}