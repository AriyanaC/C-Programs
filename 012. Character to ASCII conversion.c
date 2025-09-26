/******************************************************************************
WAPC to input a character. Print its ASCII value.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char ipChar;
    
    printf("Enter a character constant:");
    scanf("%c", &ipChar);
    
    printf("\n The ASCII value of %c is %d.", ipChar, ipChar);
    
    return 0;
}
