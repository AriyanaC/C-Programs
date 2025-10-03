/*******************************************************************************
WAPC to input a positive integer. Check whether it is Automorphic or not.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, originalNum, square, lastDigitNum, lastDigitSquare;
    
    printf("Enter a positive number:");
    scanf("%d", &num);
    
    if (num == 0 || num == 1) 
    {
        printf("%d is an automorphic number.\n", num);
        return 0;
    }

    originalNum = num;
    square = num * num;
    
    while (originalNum > 0)
    {
        lastDigitNum = originalNum % 10;
        lastDigitSquare = square % 10;
        
        if (lastDigitNum != lastDigitSquare) 
        {
            printf("%d is not an automorphic number.\n", num);
            return 0;
        }

        originalNum /= 10;
        square /= 10;
    }
    
    printf("%d is an automorphic number.\n", num);
    
    return 0;
}