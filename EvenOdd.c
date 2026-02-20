#include<stdio.h>
void main()
{
	int start,end;
	
	printf("Enter start no:");
	scanf("%d",&start);
	
	printf("Enter end no:");
	scanf("%d",&end);
	
	printf("/Enter even no");
    for(int i=start;i<=end;i++)
    {
    	if(i%2==0)
    	{
    		printf("%d\n", i);
		}
	}
	
	printf("/Enter odd no:");
	for(int i=start;i<=end;i++)
	{
		if(i%2!=0)
		{
			printf("%d\n", i);
	    }  
	}
}