//Convert a Person's Name in Abbreviated
#include<stdio.h>
int main()
{
    char fname[20],mname[20],lname[20];
    printf("enter the name of the person\n");
    scanf("%s%s%s",fname,mname,lname);
    printf("Abbrivated name is: ");
    printf("%c.%c.%s",fname[0],mname[0],lname);
    return 0;
}
