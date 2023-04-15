#include<iostream>
using namespace std;
//template <class T>
//or we can also write type name in place of class
template <typename RT,typename ARG1,typename ARG2,typename ARG3>
//We have change the keyword to T, You can use any letter is upto you. The letter T will be
//replaced with specific data type which you will tell to the compiler

RT largest(ARG1 x,ARG2 y,ARG3 z){
    if(x==y==z){
        cout<<"both are equal"<<endl;
    }else{
        if(x>y&&x>z){
            cout<<x<<endl;
        }else{
            if(y>x&&y>z){
                cout<<y<<endl;
            }else{
                cout<<z;
            }
        }
    }
    return 0;
}



int main(){
float result1,result2;
//Here inside <> we will write the data type which we want to replace with T every time during
//execution of Program
//here we are finding greatest among three numbers
largest<float,int,float,float>(6,5.5f,7); //match it with template var order and their position in func
return 0;
}
//The logic is that our code will be replaced with respective data type which we want
