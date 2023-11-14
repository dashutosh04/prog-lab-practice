/*WAP to find the sum of all digits
of a three-digit number. Number
must be a user input*/

#include <stdio.h>

int main()
{

    int num, first, second, third, sum;

    printf("Enter the number: ");
    scanf("%d", &num);

    first = num / 100;
    second = (num / 10) % 10;
    third = num % 10;

    sum = first + second + third;

    printf("Sum of digits: %d.\n", sum);
}