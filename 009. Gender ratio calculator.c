/******************************************************************************
WAPC to find the gender ratio based on the number of males and number of females entered as inputs.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int noOfMales, noOfFemales; float ratio;

    printf("Enter the no of males:");
    scanf("%d", &noOfMales);
    printf("\nEnter the no of females:");
    scanf("%d", &noOfFemales);
    
    ratio = ((float) noOfFemales/noOfMales)*1000;
    
    printf("\nThe gender ratio is = %.3f", ratio);
    
    return 0;
}
