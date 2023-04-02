#include<stdio.h>
#include<string.h>

#define size 5

struct employee
    {
        int id;
        char name[20];
        int salary;
};

typedef struct employee emp;

void sort(emp *p);

void main(){
    emp p[4];
    int i;
    p[0].id=1;
    strcpy(p[0].name,"adr");
    p[0].salary=5000;
    for(i=0;i<size;i++){
        printf("Employee %d:",i+1);
        scanf("%d%s%d",&p[i].id,&p[i].name,&p[i].salary);
    }
    sort(p);
    printf("\n ---Sorted Names-----\n");
    for(i=0;i<size;i++){
        printf("Employee %d:",i+1);
        printf("%d %s %d \n",p[i].id,p[i].name,p[i].salary);
    }
}

void sort(emp *obj){
    int i,j;
    emp temp;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(strcmp(obj[i].name,obj[j].name)>0){
                temp=obj[i];
                obj[i]=obj[j];
                obj[j]=temp;
            }
        }
    }
}
