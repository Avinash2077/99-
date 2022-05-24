//to print area and circumference of the circle
#define PI 3.145
#include<stdio.h>
int main()
{
    int r;
    printf("enter the radius of the circle:");
    scanf("%d",&r);
    printf("areaofthecircle(PI*%d*%d)is:%.2f\n",r,r,PI*r*r);
    printf("Circumferenceofthecircle(2*PI*%d)is:%.2f",r,2*PI*r);

    return 0;
}
