#include<stdio.h>
void main()
{
	int num1, num2, num3, num4, num5;
	int total;
	int average;
	
	printf("Enter value for num1: ");
	scanf("%d", &num1);
	
	printf("Enter value for num2: ");
	scanf("%d", &num2);
	
	printf("Enter value for num3: ");
	scanf("%d", &num3);
	
	printf("Enter value for num4: ");
	scanf("%d", &num4);
	
    printf("Enter value for num5: ");
	scanf("%d", &num5);
	
	total = num1+num2+num3+num4+num5;
	average = total/5;
	
	printf("total : %d", total );
	printf("average: %d",average);
	
	
}