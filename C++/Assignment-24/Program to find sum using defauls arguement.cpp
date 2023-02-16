//CPP Program to find sum of 2 or 3 numbers using defauls arguements
#include<iostream>
using namespace std;

//Function Prototype
int sum(int x,int y,int z=0);
main(){
    cout<<"Sum :"<<sum(5,6)<<"\t"<<endl;
    //Calling Function here
    cout<<"Sum :"<<sum(5,6,7)<<endl;

return 0;
}

int sum(int x,int y,int z){
    int sum;
    sum=x+y+z;
    return sum;
}
