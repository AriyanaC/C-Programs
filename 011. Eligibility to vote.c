/******************************************************************************
WAPC to input the age of a person. Check and display if the person is eligible to vote.
*******************************************************************************/

#include <stdio.h>

int main()
{
    unsigned int age;
    
    printf("Enter the age:");
    scanf("%d", &age);
    
    if(age >= 18)
    {
        printf("\n The person is eligible to vote.");
    }
    else
    {
        printf("\n The person is not eligible to vote.");
    }
    
    return 0;
}
