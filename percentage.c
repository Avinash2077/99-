//programme to calculate percentage of 5 subjects
#include<stdio.h>
int main()
{
    int no_of_subj,tel,hin,eng,sci,math;
    printf("enter the number of subjects:");
    scanf("%d",&no_of_subj);
    printf("enter the {tel,hin,eng,sci,math} marks:");
    scanf("%d%d%d%d%d",&tel,&hin,&eng,&sci,&math);

    float sum = tel+hin+eng+sci+math;
    int total_marks =  no_of_subj*100;
    float percentage = (sum/total_marks)*100;
    printf("percentage of the marks is: %.2f%",percentage);
    return 0;
}
