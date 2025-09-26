/*******************************************************************************
WAPC to check and print if a number is divisible by both 3 and 5.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1;
   
    printf("\nEnter a number: ");
    scanf("%d",&num1);
   
    if(num1 % 3 == 0)
    {
        if (num1 % 5 == 0)
        {
            printf("\n%d is divisible by both 3 and 5.", num1);
        }
    }

    return 0;

}