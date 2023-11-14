/*WAP to convert given second into
its equivalent hour, minute and
second as per the following
format.*/

#include <stdio.h>

int main()
{
    int time, time_hour, time_min, time_sec;

    printf("Enter the time: ");
    scanf("%d", &time);

    time_min = time / 60;
    time_hour = time_min / 60;
    time_sec = time % 60;
    time_min = time_min % 60;

    printf("%d second = %d Hour, %d Minute and %d Seconds\n", time, time_hour, time_min, time_sec);
}