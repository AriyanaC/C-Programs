/******************************************************************************
WAPC to do the following:
Input: account balance, withdrawal amount.

Follow the given rules:
1. Withdrawal amount must be a multiple of 100.
2. Withdrawal must not exceed balance.
3. Maintain a minimum balance of ₹500 after withdrawal.

Output: Transaction success or failure with reason.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int accountBalance = 0;
    int withdrawl = 0;
    int newBalance; 
    int flag = 0;
    
    printf("Enter the account balance:");
    scanf("%d", &accountBalance);
    
    printf("Enter the withdrawl amount:");
    scanf("%d", &withdrawl);
    
    if (withdrawl % 100 != 0)
    {
        printf("\nWithdrawl amount must be a multiple of 100.");
    }
    else if (withdrawl > accountBalance)
    {
        printf("\nThe withdrawl amount is more than the account balance.");
    }
    else if ((accountBalance - withdrawl) < 500)
    {
        printf("\nThe remaining balance is less than the minimum of Rs. 500.");
    }
    else
    {
        flag = 1;
        newBalance = accountBalance - withdrawl;
    }
    
    if (flag == 0)
    {
        printf("\nTransaction failure");
        printf("\nThe account balance is: %d ", accountBalance);
    }
    else if(flag == 1)
    {
        printf("\nTransaction successful");
        printf("\nThe new account balance is: %d", newBalance);
    }
    

    return 0;
}