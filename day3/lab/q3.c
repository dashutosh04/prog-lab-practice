/*
WAP to calculate area of a
circle while taking radius as
user input.
*/

#include <stdio.h>

float main()
{
    float radius, area = 0;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = radius * radius * 22 / 7;

    printf("The area is: %.2f\n", area);
}