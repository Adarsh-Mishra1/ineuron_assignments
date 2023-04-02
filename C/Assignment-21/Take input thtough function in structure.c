#include<stdio.h>
struct employee
    {
        int id;
        char name[10];
        int salary;
    };

void input(int x,char n[10], int s){
    struct employee obj;
    obj.id=x;
    strcpy(obj.name,n);
    obj.salary=s;
    printf("Your Data is saved: %d, %s, %d",obj.id,obj.name,obj.salary);
}

void main(){
    int id,salary;
    char name[10];
    printf("Enter the data: name,id,salary");
    gets(name);
    scanf("%d%d",&id,&salary);
    input(id,name,salary);

}
