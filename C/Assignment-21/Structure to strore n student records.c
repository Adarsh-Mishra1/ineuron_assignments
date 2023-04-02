#include<stdio.h>
#include<string.h>

struct student
    {
        int id;
        char name[20];

};

typedef struct student stu;



void main(){
    int n;
    printf("Enter the number of student ");
    scanf("%d",&n);
    stu p[n];
    int i;
    for(i=0;i<n;i++){
        printf("student %d:",i+1);
        scanf("%d%s",&p[i].id,&p[i].name);
    }

    printf("\n ---Records Entered-----\n");
    for(i=0;i<n;i++){
        printf("student %d:",i+1);
        printf("%d %s \n",p[i].id,p[i].name);
    }
}

