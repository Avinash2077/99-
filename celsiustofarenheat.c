//Convert Temperature Celsius into Fahrenheit
#include<stdio.h>
int main()
{
    int celsius;
    printf("enter the temperature in celsius:");
    scanf("%d",&celsius);
    printf("the temperature in farenheit is: %.2f degree freh",(1.8*celsius)+32);
    return 0;
}
