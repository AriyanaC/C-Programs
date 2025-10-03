/*******************************************************************************
WAPC to input a positive integer. Check whether the number is Sunny or not. 
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, nextNum, root;
    
    printf("Enter a positive number:");
    scanf("%d", &num);
    
    nextNum = num + 1;
    
    root = sqrt(nextNum);

    if (root * root == nextNum) 
    {
        printf("%d is a Sunny number.\n", num);
    } 
    else 
    {
        printf("%d is not a Sunny number.\n", num);
    }

    return 0;
}