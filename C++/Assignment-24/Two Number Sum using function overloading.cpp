//CPP Program for sum using function overloading
#include<iostream>
using namespace std;

//Function Prototype
int sum(int,int);
float sum(float,float);
main(){

    cout<<"Sum :"<<sum(5,6)<<endl;
    //3.11 is consider as duble , to make it float add f as suffix ex 3.11f
    cout<<"Sum:"<<sum(3.11f,4.11f)<<endl;

return 0;
}

//Function Definition
int sum(int x,int y){
    return (x+y);
}
//Function Definition
float sum(float x,float y){
    return (x+y);
}
