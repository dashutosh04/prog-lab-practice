/*WAP to find the average
mark of 5 subjects of a
student and find the
percentage. Assume full
mark of each subject is
200. All the input must be
given by user.*/

#include <stdio.h>

int main()
{
	float mark1, mark2, mark3, mark4, mark5;
	float added_marks = 0;

	printf("Enter the number of 1st subject: ");
	scanf("%f", &mark1);

	printf("Enter the number of 2nd subject: ");
	scanf("%f", &mark2);

	printf("Enter the number of 3rd subject: ");
	scanf("%f", &mark3);

	printf("Enter the number of 4th subject: ");
	scanf("%f", &mark4);

	printf("Enter the number of 5th subject: ");
	scanf("%f", &mark5);

	added_marks = mark1 + mark2 + mark3 + mark4 + mark5;

	float average_mark = added_marks / 5;
	float percent = (added_marks / 1000) * 100;

	printf("The average is: %.2f\n", average_mark);
	printf("The percentage is: %.2f%%\n", percent);
}
