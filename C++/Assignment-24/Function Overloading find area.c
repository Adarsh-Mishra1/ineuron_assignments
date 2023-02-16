//CPP Program to find sum of 2 or 3 numbers using defauls arguements
#include<iostream>
using namespace std;

//Function Prototype
float area(float);
float area(int,int);
float area(int,float);
main(){
    cout<<"Sum :"<<sum(5,6)<<"\t"<<endl;
    //Calling Function here
    cout<<"Sum :"<<sum(5,6,7)<<endl;

return 0;
}

float area(float r){
    //Circle Area
    float area;
    area=3.14*r*r;
    return area;
}

float area(int x,int y){
    //Circle Area
    float area;
    area=x*y;
    return area;
}

float area(int x,float y){
    //Circle Area
    float area;
    area=1/2*x*y;
    return area;
}
