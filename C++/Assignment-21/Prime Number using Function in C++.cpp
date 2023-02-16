#include<iostream>
using namespace std;

//Function declaration here
int prime(int);

int main(){
    int num,res=0;
    cout<<"Enter any Positive Number greater than 1"<<endl;
    cin>>num;
    res=prime(num);
    res==0?cout<<"Not Prime ":cout<<"Prime";
}

int prime(int n){
     int i;
     for(i=2;i<=n/2l;i++){
        if(n%i==0){
          return 1;
        }
     }
     return 0;
}
