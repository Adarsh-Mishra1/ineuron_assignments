// C Plus Plus program to find x to the power y
#include<iostream>
using namespace std;
//Function declaration here
int fun(int,int);

int main(){
    int num,pow;
    cout<<"Enter any Positive Number and power"<<endl;
    cin>>num>>pow;
    cout<<num<<" to power "<<pow<<"is: "<<fun(num,pow)<<endl;
}

int fun(int n,int pow){
     int i=1,res=1;
     while(i<=pow){
        res=res*n;
        i++;
     }
     return res;
}

