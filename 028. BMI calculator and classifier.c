/******************************************************************************
WAPC to do the following:
1. Input: height (m), weight (kg).
2. Calculate BMI = weight / (height²).
3. Classify:
   a) BMI < 18.5 → Underweight
   b) 18.5 ≤ BMI < 25 → Normal
   c) 25 ≤ BMI < 30 → Overweight
   d) ≥ 30 → Obese
4. If overweight or obese and age > 40 → print "Consult doctor".

*******************************************************************************/

#include <stdio.h>

int main()
{
    int age; float height, weight, BMI;
    
    printf("Enter the height, weight and age of the person:");
    scanf("%f %f %d", &height, &weight, &age);
    
    BMI = weight / (height * height);
    
    if (BMI < 18.5)
    {
       printf("Underweight");
    }
    
    else if (BMI >= 18.5 && BMI < 25)
    {
        printf("Normal");
    }
    else if (BMI >= 25 && BMI < 30)
    {
        printf ("Overweight");
        if (age > 40)
        {
            printf("\nConsult Doctor");
        }
    }
    else if (BMI >= 30)
    {
        printf("Obese");
        if (age > 40)
        {
            printf("\nConsult Doctor");
        }
    }
    
    return 0;
}