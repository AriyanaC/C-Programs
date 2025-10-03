/*******************************************************************************
WAPC to input a positive integer. Check whether it is Kaprekar or not.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, originalNum, numDigits = 0, square, part1, part2;
    
    printf("Enter a positive number:");
    scanf("%d", &num);
    
    if (num == 1) 
    {
        printf("%d is an automorphic number.\n", num);
        return 0;
    }

    originalNum = num;
    square = num * num;
    
    while (originalNum > 0)
    {
        numDigits++;
        originalNum /= 10;
    }
    
    int power_of_10 = 1;
    
    for (int i = 1; i <= numDigits; i++) 
    {
        power_of_10 *= 10;
        
        part1 = square / power_of_10;
        part2 = square % power_of_10;
        
        if (part2 > 0 && part1 + part2 == num) 
        {
            printf("%d is a Kaprekar number.\n", num);
            return 0;
        }
    }

    printf("%d is not a Kaprekar number.\n", num);
    
    return 0;
}