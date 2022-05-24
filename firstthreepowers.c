//Read Integer N and Print the First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
#include<math.h>
int main()
{
    int num,res,i;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        res = pow(num,i);
        printf("power of %d^%d is %d\n",num,i,res);
    }
    return 0;
}
