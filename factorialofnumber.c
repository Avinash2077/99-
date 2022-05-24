//factorial programmme

#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number to get the factorial:");
    scanf("%d",&num);
    int fact=1;
    for(i=1;i<=num;i++)
    {
        fact = fact*i;
    }
    printf("factorial of the %d is %d",num,fact);
    return 0;
}
