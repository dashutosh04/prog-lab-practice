/*WAP to add two times in hour,
minute &amp; second format entered
through the keyboard in the
format hh:mm:ss*/

#include <stdio.h>
int main()
{
    int hh1, hh2, mm1, mm2, ss1, ss2, hh3, mm3, ss3;

    printf("Enter the first time: ");
    scanf("%d:%d:%d", &hh1, &mm1, &ss1);

    printf("Enter the second time: ");
    scanf("%d:%d:%d", &hh2, &mm2, &ss2);

    hh3 = hh1 + hh2;
    mm3 = mm1 + mm2;
    ss3 = ss1 + ss2;

    if (ss3 >= 60)
    {
        mm3++;
        ss3 -= 60;
    }

    if (mm3 >= 60)
    {
        hh3++;
        mm3 -= 60;
    }

    if (hh3 >= 24)
    {
        hh3 -= 24;
    }

    printf("Output time is %d:%.2d:%.2d", hh3, mm3, ss3);

    return 0;
}