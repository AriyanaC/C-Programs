/******************************************************************************
WAPC to input the coordinates of two points (x1, y1) and (x2, y2). Calculate the slope and display the same.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float x1, x2, y1, y2, slope;

    printf("Enter the coordinates of the first point:");
    scanf("%f %f", &x1, &y1);
    
    printf("Enter the coordinates of the second point:");
    scanf("%f %f", &x2, &y2);

    slope= (y2 - y1) / (x2 - x1);

    printf("The slope is= %.2f", slope);

    return 0;
}