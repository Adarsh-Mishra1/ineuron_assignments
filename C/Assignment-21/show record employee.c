#include<stdio.h>
#include<string.h>
struct employee
    {
        int id;
        char name[10];
        int salary;
    };
struct employee obj;
void input(int x,char n[10], int s){
    obj.id=x;
    strcpy(obj.name,n);
    obj.salary=s;
    //printf("Your Data is saved: %d, %s, %d",obj.id,obj.name,obj.salary);
}

void output(){
    printf("id: %d \t name: %s \t salary:%d",obj.id,obj.name,obj.salary);
}

void main(){
    int id,salary;
    char name[10];
    printf("Enter the data: name,id,salary");
    gets(name);
    scanf("%d%d",&id,&salary);
    input(id,name,salary);
    output();

}
