//CPP Program to find sum of 2 or 3 numbers using defauls arguements
#include<iostream>
using namespace std;

//Function Prototype
void sum(int,int);
main(){
    int a=2,b=9;
    cout<<"Sum:"<<sum(5,6)<<"\t"<<b<<endl;
    //Calling Function here
    cout<<"After Swap:"<<sum(5,6,7)<<endl;

return 0;
}

int sum(int x,int y,int z=0){
    int sum;
    sum=x+y+z;
    return sum;
}
