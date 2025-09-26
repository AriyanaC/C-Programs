/*******************************************************************************
WAPC to check if a triangle is valid or not. If it is valid, check and print if 
it is isosceles, scalene or equilateral.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c;
   
    printf("\nEnter the sides of a triangle: ");
    scanf("%d %d %d",&a, &b, &c);
   
    if(a == 0 || b == 0 || c == 0)
    {
        printf("\nInvalid triangle");
    }
    else if((a + b)> c || (b + c)> a || (a + c)>b)
    {
        printf("\nIt is a valid triangle.");
        if (a == b && b == c)
        {
            printf("\nIt is an equilateral triangle.");
        }
        else if (a == b || b == c || a == c)
        {
            printf("\nIt is an isosceles triangle.");
        }
        else if (a != b && b!= c && a!=c)
        {
            printf("\nIt is a scalene triangle.");
        }
    }

    return 0;
}