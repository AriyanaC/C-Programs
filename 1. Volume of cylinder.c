/******************************************************************************
WAPC to input radius and height of a cylinder. Calculate the volume of the cylinder.
*******************************************************************************/

#include <stdio.h>
#define Pi 3.142
int main()
{
    float radius, height, volume;

    printf("Enter the radius and height of a cylinder in cm:");
    scanf("%f %f", &radius, &height);

    volume= Pi* radius* radius* height;

    printf("The volume of the cylinder (cm) is= %.2f", volume);

    return 0;
}