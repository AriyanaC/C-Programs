/*******************************************************************************
WAPC to check if a number is of 3-digits and divisible by 3.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1;
   
    printf("\nEnter a number: ");
    scanf("%d",&num1);
   
    if(num1 >= 100 && num1 <= 999)
    {
        printf("\n%d is of 3 digits.", num1);
        if (num1 % 3 == 0)
        {
            printf("\n%d is divisible by 3.", num1);
        }
        else
        {
            printf("\n%d is not divisible by 3.", num1);
        }
    }
    else
    {
        printf("\n%d is not of 3 digits.", num1);
    }

    return 0;
}