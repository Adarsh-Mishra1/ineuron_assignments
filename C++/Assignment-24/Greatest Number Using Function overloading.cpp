//CPP Program to find greater number using function overloading
#include<iostream>
using namespace std;

//Function Prototype
int comp(int,int);
float comp(float,float);
main(){

    cout<<"Greatest :"<<comp(5,6)<<endl;

    cout<<"Greatest:"<<comp(3.11f,4.11f)<<endl;

return 0;
}


int comp(int x,int y){
    //Circle Area
    return x>y?x:y;
}

float comp(float x,float y){
    //Circle Area
    return x>y?x:y;
}
