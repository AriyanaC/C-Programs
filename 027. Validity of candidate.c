/******************************************************************************
WAPC to do the following:
1. Input: age, citizenship status (Y/N), criminal record (Y/N).
2. Eligible if: age ≥ 18 and citizenship = Y and no criminal record.
3. If age ≥ 60, print "Senior Citizen Eligible".
4. If not eligible, specify why.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int age, flag = 0; char citizenship, criminalRecord;
    
    printf("Enter the age, citizenship status and criminal record of the person:");
    scanf("%d %c %c", &age, &citizenship, &criminalRecord);
    
    citizenship = toupper(citizenship);
    criminalRecord = toupper(criminalRecord);
    
    if (age >= 18)
    {
       if (citizenship == 'Y')
       {
           if (criminalRecord == 'N')
           {
               flag = 1;
           }
           else
           {
               printf("Not eligible as the person has a criminal record");
           }
       }
       else
       {
           printf("Not eligible as the person is not a citizen of the country.");
       }
    }
    
    if (age >= 60)
    {
        printf("Senior citizen eligible");
        flag = 1;
    }
    else if (age < 18)
    {
        printf ("Not eligible as not within the eligible age range.");
    }
    
    if (flag == 1)
    {
        printf("\nValid Candidate");
    }
    else
    {
        printf("\nInvalid Candidate");
    }
    
    return 0;
}