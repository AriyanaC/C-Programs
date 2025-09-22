/******************************************************************************
WAPC to input the temperature in Celsius and output it in Fahrenheit.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float celsius, farenheit;

    printf("Enter the temperature in celsius:");
    scanf("%f", &celsius);

    farenheit= ((celsius * 9)/5) + 32;

    printf("The temperature converted to farenheit is= %.2f", farenheit);

    return 0;
}