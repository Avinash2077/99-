#include<stdio.h>
int a = 10;
int b = 60;
int main()
{
    printf("welcome Avinash,\"we gonna learn c programming\".\n");
    int sum = getSum();
    printf("Sum is %d",sum);
    return 0;
}
int getSum()
{
    int sum = a+b;
    return sum;
}
