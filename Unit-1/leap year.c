#include <stdio.h>
int main()
{
    int year,r;
    printf("Enter a year:");
    scanf("%d",&year);
    r=year%4;
    if(r==0)
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    return 0;
}