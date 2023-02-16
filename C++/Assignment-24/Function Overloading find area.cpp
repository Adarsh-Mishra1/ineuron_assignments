//CPP Program to find area using function overloading
#include<iostream>
using namespace std;

//Function Prototype
float area(float);
float area(int,int);
float area(float,float);
main(){

    //Circle
    cout<<"Area Circle :"<<area(5.0)<<endl;
    //Rectangle Area
    cout<<"Area Rectangle :"<<area(5,6)<<endl;
    //Triangle
    //3.11 is double, 3.11 is float
    cout<<"Area:"<<area(3.11f,4.11f)<<endl;

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

float area(float x,float y){
    //Circle Area
    float area;
    area=0.5*x*y;
    return area;
}
