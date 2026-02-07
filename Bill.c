#include <stdio.h>

void main()
{
    int units;
    float bill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if(units >= 1 && units <= 50)
    {
        bill = units * 30;
    }
    else if(units >= 51 && units <= 150)
    {
        bill = units * 40;
    }
    else if(units >= 151)
    {
        bill = units * 50;
    }
    else
    {
        printf("Invalid units!");
        return 0;
    }

    printf("Total Electricity Bill = Rs %.2f", bill);

}
