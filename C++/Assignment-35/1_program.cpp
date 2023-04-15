#include<iostream>
using namespace std;
//template <class T>
//or we can also write type name in place of class
template <typename RT,typename ARG1,typename ARG2>
//We have change the keyword to T, You can use any letter is upto you. The letter T will be
//replaced with specific data type which you will tell to the compiler

RT sum(ARG1 x,ARG2 y){
    return x+y;
}



int main(){
float result1,result2;
//Here inside <> we will write the data type which we want to replace with T every time during
//execution of Program
result1=sum<float,int,float>(4,5.5f); //match it with template var order and their position in func
result2=sum<int,float,float>(4.4f,5.6f);//int rettype,float arg1,float arg2
cout<<"sum="<<result1<<endl;
cout<<"sum="<<result2<<endl;
return 0;
}
//The logic is that our code will be replaced with respective data type which we want
