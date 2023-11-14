/*WAP to convert a distance in
meter entered through keyboard
into its equivalent kilometer and
meter as per the following format.*/

#include <stdio.h>

int main()
{
    int distance, kilometer, meter;

    printf("Enter the distance: ");
    scanf("%d", &distance);

    kilometer = distance / 1000;
    meter = distance - kilometer * 1000;

    printf("%d meter = %d Km and %d meters.", distance, kilometer, meter);
}