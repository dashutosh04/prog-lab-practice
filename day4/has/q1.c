/*WAP to reverse a three-digit
number. Number must be a user
input.*/

#include<stdio.h>

int main(){

    int num,first,second,third,num_new;
    printf("Enter the number: ");
    scanf("%d",&num);

    first = num/100;
    second = (num/10)%10;
    third = num%10;

    num_new = 100*third + second*10 + first;

    printf("Sum of digits: %d.\n",num_new);
}