/*WAP to perform the
addition of two integers and
display the result. Input
must be given by user.*/

#include <stdio.h>
int main()
{

	int num1, num2;

	printf("Enter num1 : ");
	scanf("%d", &num1);

	printf("Enter num2 : ");
	scanf("%d", &num2);

	printf("\nBefore swapping\nnum1=%d\nnum2=%d\n", num1, num2);

	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("\nAfter swapping\nnum1=%d\nnum2=%d\n", num1, num2);
}
