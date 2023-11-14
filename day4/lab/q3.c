/*WAP to find the sum of 1st and
last of a six-digit number. Number
must be a user input.*/

#include <stdio.h>

long int main()
{
    int number, first, last, sum;

    printf("Enter the number: ");
    scanf("%d", &number);

    first = number / 100000;
    last = number % 10;

    sum = first + last;

    printf("Sum of digit is: %d.\n", sum);
}