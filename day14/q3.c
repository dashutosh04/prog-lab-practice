/*Write a program to concatenate
two strings without using any
library function.*/

#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, 100, stdin);

    printf("Enter the second string: ");
    fgets(str2, 100, stdin);

    int len1 = 0;
    int len2 = 0;

    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }

    for (int i = 0; i < len2; i++)
    {
        str1[len1 + i - 1] = str2[i];
    }

    str1[len1 + len2 - 1] = '\0';

    printf("New string is: \n%s", str1);

    return 0;
}