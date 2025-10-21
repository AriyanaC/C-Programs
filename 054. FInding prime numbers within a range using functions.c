/******************************************************************************
WAPC to display prime numbers within a range entered by the user.
*******************************************************************************/

#include <stdio.h>

int isPrime(int num1)
{
    if(num1 <= 1)
    {
        return 0;
    }
    
    for (int i = 2; i * i <= num1; i++)
    {
        if(num1 % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num1, start, end; 
    float flag;
    
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    
    if (start > end) 
    {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("\nPrime numbers between %d and %d are: ", start, end);
    
    for(int i = start; i<= end; i++)
    {
        flag = isPrime(i);
        if (flag) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}