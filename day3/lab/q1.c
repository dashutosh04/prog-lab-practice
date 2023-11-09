/*
WAP to perform the
addition of two integers and
display the result. Input
must be given by user.
*/

#include <stdio.h>

int main()
{

    int num1, num2, sum = 0;

    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter second number:");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum is %d.\n", sum);
}