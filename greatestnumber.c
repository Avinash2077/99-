//Find Greater No. Among the Given Three Number
#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter the three numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n2>n3)
    {
        printf("%d is the greatest number",n1);
    }
    else if(n2>n1 && n1>n3)
    {
        printf("%d is the greatest number",n2);
    }
    else
    {
        printf("%d is the greatest number",n3);
    }
    return 0;
}
