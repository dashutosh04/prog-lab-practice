/*
WAP to calculate area of a
triangle who’s base and
height are user input.
*/

#include <stdio.h>

float main()
{
    float height, base, area = 0;

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    printf("Enter the base area of the triangle: ");
    scanf("%f", &base);

    area = height * base * 0.5;

    printf("The area of the triangle is: %.2f\n", area);
}