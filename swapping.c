#include<stdio.h>
void main()

{
	int no1=10;
	int no2=20;
	int temp;
	
	temp=no1;
	no1=no2;
	no2=temp;
	
	printf("after swapping: no1=%d, no2=%d", no1, no2);
	
}