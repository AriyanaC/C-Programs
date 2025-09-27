/*******************************************************************************
WAPC to accept the weight of a parcel in kilograms and calculate the 
rate per kilogram based on the following criteria:

Weight in kilograms     Rate per kilogram
First 5 kilograms          Rs. 800
Next 5 kilograms           Rs. 700
Above 10 kilograms         Rs. 500

Also input the type of the courier (‘I’ for International and ‘D’ for Domestic). 
If the type of the courier is International, an additional amount of Rs. 1500 is
levied.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float weight, bill = 0.0; 
    char parcel_type;
    
    printf("\nEnter the weight of a parcel in kgs:");
    scanf("%f",&weight);
    
    printf("\nEnter the type of the parcel:");
    scanf(" %c", &parcel_type);
    
    if(weight <= 5)
    {
       bill = weight * 800;
    }
    else if(weight <= 10)
    {
        bill = (5 *800) + ((weight - 5) * 700);
    }
    else
    {
        bill = (5 * 800) + (5 * 700) + ((weight - 10) * 500);
    }
    
    if (parcel_type == 'I' || parcel_type == 'i')
    {
        bill += 1500;
    }
    
    printf("\nCourier Bill = Rs. %.2f", bill);
    return 0;

}