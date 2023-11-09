/*
WAP to find Fahrenheit for
a given centigrade
temperature.
*/

#include <stdio.h>

float main()
{
    float temp_c, temp_f = 0;

    printf("Enter the temperature in Centigrade: ");
    scanf("%f", &temp_c);

    temp_f = temp_c * 9 / 5 + 32;

    printf("The Fahrenheit temperature is: %.2f\n", temp_f);
}