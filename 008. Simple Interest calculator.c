/******************************************************************************
WAPC to find the simple interest based on user inputs
*******************************************************************************/

#include <stdio.h>

int main()
{
    float principle, rate, time, simpleInterest, amount ;

    printf("Enter the principle amount:");
    scanf("%f", &principle);
    printf("Enter the rate of interest:");
    scanf("%f", &rate);
    printf("Enter the time in years:");
    scanf("%f", &time);
    
    simpleInterest = (principle * rate * time)/100;
    amount = principle + simpleInterest;
    printf("The simple interest is =  %f", simpleInterest);
    printf("\nThe total amount after adding simple interest is = %f", amount);
    
    return 0;
}
