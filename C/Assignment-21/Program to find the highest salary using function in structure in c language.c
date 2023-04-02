//C Program to create a function and find the highest salary in given
//structure with array of 10 employee
#include<stdio.h>

struct employee{
    int id;
    char name[30];
    int salary;
};

typedef struct employee emp;

int high_salary(struct employee* obj,int size){
    int i,temp=0;
    for(i=0;i<size;i++){
        if(temp<obj[i].salary){
            temp=obj[i].salary;
        }
    }
    return temp;

}

void main(){
    int h_sal,size=2,i;
    struct employee e[size];
    struct employee* ptr;
    ptr=&e;
    for(i=0;i<size;i++){
        printf("Employee %d :",i+1);
        scanf("%d%s%d",&e[i].id,&e[i].name,&e[i].salary);
    }
    //emp b={4,"Adra",4000};
    h_sal=high_salary(ptr,size);
    printf("high sal is %d",h_sal);
}
