//Calculate a Simple Interest
#include<stdio.h>
int main()
{
    int p,t,r;
    printf("enter the principle_amount,time_period,rate_of_intrest:");
    scanf("%d%d%d",&p,&t,&r);
    printf("simple_intrest of the given data is: %d rs",(p*t*r)/100);
    return 0;
}
