//CPP Program to swap two variables using function with call by reference
#include<iostream>
using namespace std;

//Function Prototype
void swap(int *,int *);
main(){
    int a=2,b=9;
    cout<<"Before Swap:"<<a<<"\t"<<b<<endl;
    //Calling Function here
    swap(a,b);
    cout<<"After Swap:"<<a<<"\t"<<b<<endl;

return 0;
}

void swap(int &x,int &y){
    int t;
    t=x;
    x=y;
    y=t;
}
