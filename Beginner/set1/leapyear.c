#include<stdio.h>
int main()
{
	char year;
    scanf("%d",&year);
    if(year%4==0)
    printf("leap year");
    else
    printf("not a leap year");
}
