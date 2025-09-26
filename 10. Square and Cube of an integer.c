/******************************************************************************
WAPC to input an integer. Calculate and display the square and cube of the number.
*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int num1, square, cube;
    
    printf("Enter a number: ");
    scanf("%d", &num1);
    
    square = pow(num1,2);
    cube = pow(num1, 3);
    
    printf("\nThe square of %d is %d", num1, square);
    printf("\nThe cube of %d is %d", num1, cube);
    return 0;
}