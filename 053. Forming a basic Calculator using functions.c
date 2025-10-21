/******************************************************************************
With the help of 4 user-defined functions, design a basic calculator capable of 
addition, subtraction, multiplication and division.
*******************************************************************************/

#include <stdio.h>

int add(int num1, int num2)
{
    return (num1 + num2);
}

int subtract(int num1, int num2)
{
    return (num1 - num2);
}

int multiply(int num1, int num2)
{
    return (num1 * num2);
}

float divide(int num1, int num2)
{
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    
    return (float) (num1 / num2);
}

int main()
{
    int num1, num2, choice = 0; 
    float result;
    
    printf("Welcome to the Basic Calculator!\n");

    while (choice !=5)
    {
        printf("\nSelect an operation:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        if (choice >= 1 && choice <= 4) 
        {
            printf("Enter two integers: ");
            scanf("%d %d", &num1, &num2);
        }
        
        if(choice == 1)
        {
            result = add(num1, num2);
            printf("%d + %d = %.2f\n", num1, num2, result);
        }
        else if(choice == 2)
        {
            result = subtract(num1, num2);
            printf("%d - %d = %.2f\n", num1, num2, result);
        }
        else if(choice == 3)
        {
            result = multiply(num1, num2);
            printf("%d * %d = %.2f\n", num1, num2, result);
        }
        else if(choice == 4)
        {
            result = divide(num1, num2);
            if(num2 != 0)
            {
                printf("%d / %d = %.2f\n", num1, num2, result);
            }
        }
        else if(choice == 5)
        {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }
        else
        {
            printf("Invalid choice. Please select a valid option.\n");
            break;
        }
    }
    
    return 0;
}