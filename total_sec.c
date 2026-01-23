#include<stdio.h>
int main()
{
	int hh,min,sec,total_sec;
	
	printf("Enter a Time in hh");
	scanf("%d",&hh);
	
	printf("Enter a Time in min");
	scanf("%d",&min);
	
	printf("Enter a Time in sec");
	scanf("%d",&sec);
	
	total_sec=(hh * 3600) + (min * 60) + sec;
	
	printf("total-sec=%d",total_sec);
}