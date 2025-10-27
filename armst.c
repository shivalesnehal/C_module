#include<stdio.h>
void main()
{
	int no;
	printf("enter a number");
	scanf("%d", &no);
	int temp=no,sum=0;
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	}
	no=temp;
	
	while(no>0)
	{
		int rem=no%10;
		
		int res=1;
		for(int i=1;i<=count;i++)
		{
		    res=res*rem;
		}
		sum=sum+res;
		no=no/10;
	}
	if(temp==sum)
	{
		printf("no is armstrong");
	}
	else
	{
		printf("no is not armstrong");
	}
}