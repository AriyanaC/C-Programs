/******************************************************************************
WAPC to input five integers from the user. Calculate and print the average.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int x1, x2, x3, x4, x5; float average;

    printf("Enter 5 integers:");
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);

    average= (float)(x1 + x2 + x3 + x4 + x5)/5;

    printf("The average of the 5 numbers is= %.2f", average);

    return 0;
}