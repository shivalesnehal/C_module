#include<stdio.h>
int main()
{
	float sub1, sub2, sub3, sub4, sub5;
	float totalMarks;
	float percentage;
	float MAX_TOTAL_MARKS = 500.0;
	
	printf("Enter marks for sub1: ");
	scanf("%f", &sub1);
	
	printf("Enter marks for sub2: ");
	scanf("%f", &sub2);
	
	printf("Enter marks for sub3: ");
	scanf("%f", &sub3);
	
	printf("Enter marks for sub4: ");
	scanf("%f", &sub4);
	
	printf("Enter marks for sub5: ");
	scanf("%f", &sub5);
	
	totalMarks = sub1+sub2+sub3+sub4+sub5;	
	percentage=(totalMarks/ MAX_TOTAL_MARKS)*100;
	 printf("\ntotalMarks: %.2f\n", totalMarks);
	 printf("Percentage: %2f %%\n", percentage);
	 
	 
	
}