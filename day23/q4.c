/*Write a program to check
whether an entered string is
palindrome or not.*/

#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        str[len + i - 1] = str[i];
    }

    str[len - 1] = '\0';

    printf("New string is: \n%s", str);

    return 0;
}