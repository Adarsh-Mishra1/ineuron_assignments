#include<stdio.h>
void main(){
    struct employee
    {
        int id;
        char name;
        int salary;
    };
    struct employee p1;
    printf("%d",p1.id);
}
