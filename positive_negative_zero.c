#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter a number:");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("No is Positive");
	}
	else if(a<0)
	{
		printf("No is Negative");
	}
	else
	{
		printf("No is Neutral");
	}
	
}