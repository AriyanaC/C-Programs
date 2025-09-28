/******************************************************************************
WAPC to do the following:
Input: day, month, year.

Check the following:
1. Month between 1 and 12.
2. Correct days in month (30 vs 31 days).
3. February: 28 days normally, 29 days if leap year.

Output: "Valid date" or "Invalid date".
*******************************************************************************/

#include <stdio.h>

int main()
{
    int day, month, year, isValid = 1, isLeap = 0;
    
    printf("Enter the date as day, month and year seperately:");
    scanf("%d %d %d", &day, &month, &year);
    
    if (month < 1 || month > 12)
    {
       isValid = 0;
    }
    
    else if (day < 1 || day > 31)
    {
        isValid = 0;
    }
    else
    {
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day > 30)
            {
                isValid = 0;
            }
        }
        else if (month == 2)
        {
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            {
                isLeap = 1;
            }
            if (isLeap)
            {
                if (day > 29)
                {
                    isValid = 0;
                }
            }
            else if (day > 28)
                {
                    isValid = 0;
                }
        }
    }
    
    if (isValid)
    {
        printf("\nValid Date");
    }
    else
    {
        printf("\nInvalid Date.");
    }
    
    return 0;
}