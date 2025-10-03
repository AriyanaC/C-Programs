/*******************************************************************************
WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter the number of terms:");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
    {
        printf("\n%d", i);
    }
    return 0;
}