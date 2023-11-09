/*WAP to convert given
paisa into its equivalent
rupee and paisa as per the
following format.*/

#include <stdio.h>

int main()
{
	int paisa, rupee, remainder;

	printf("Enter the amount:");
	scanf("%d", &paisa);

	rupee = paisa / 100;
	remainder = paisa % 100;

	printf("%d paisa = %d Rupee and %d paisa\n", paisa, rupee, remainder);
}
