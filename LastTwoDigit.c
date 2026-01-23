#include<stdio.h>
int main()
{
	int num,last2;
	
	printf("Enter a number");
	scanf("%d",&num);
	
	last2=num%100;
	
	printf("Last two digits %d",last2);
}