#include<stdio.h>
#include<string.h>

#define size 10

struct student
    {
        int id;
        char name[20];

};

typedef struct student stu;



void main(){
    stu p[4];
    int i;
    for(i=0;i<size;i++){
        printf("student %d:",i+1);
        scanf("%d%s",&p[i].id,&p[i].name);
    }

    printf("\n ---Records Entered-----\n");
    for(i=0;i<size;i++){
        printf("student %d:",i+1);
        printf("%d %s \n",p[i].id,p[i].name);
    }
}

