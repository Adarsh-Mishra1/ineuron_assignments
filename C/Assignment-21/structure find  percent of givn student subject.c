#include<stdio.h>
#include<string.h>

struct student{
    int roll_no;
    char name[20];
    float chem;
    float math;
    float physics;
};

typedef struct student stu;



void main(){
    int n;
    float perc;
    printf("Enter the number of student ");
    scanf("%d",&n);
    stu p[n];
    int i;
    for(i=0;i<n;i++){
        printf("student %d:",i+1);
        scanf("%d%s%f%f%f",&p[i].roll_no,&p[i].name,&p[i].chem,&p[i].math,&p[i].physics);
    }

    printf("\n ---Result-----\n");
    for(i=0;i<n;i++){
        printf("Percentage student %d:",p[i].roll_no);
        perc=(p[i].chem+p[i].math+p[i].physics)/300*100;
        printf("%f \n",perc);
    }
}

