#include<stdio.h>
void main()
{
	int start,end;
	int sum=0;
	
	printf("Enter start no:");
	scanf("%d",&start);
	
	printf("Enter end no:");
	scanf("%d",&end);
	
	if(start%2==0)
	{
		start=start+1;
	}
	 for(int i = start; i <= end; i = i + 2)
    {
        sum = sum + i;
    }
    printf("Sum = %d", sum);	
}