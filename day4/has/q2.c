/*WAP to swap the contents of two
variables by using a single
statement for swap in C.*/

#include <stdio.h>
int main()
{

	int num1, num2;

	printf("Enter num1 : ");
	scanf("%d", &num1);

	printf("Enter num2 : ");
	scanf("%d", &num2);

	printf("\nBefore swapping\nnum1=%d\nnum2=%d\n", num1, num2);

	num1 = num1 + num2, num2 = num1 - num2, num1 = num1 - num2;

	printf("\nAfter swapping\nnum1=%d\nnum2=%d\n", num1, num2);
}
