//C plus plus program to check number is fubonacci or not
#include<iostream>
using namespace std;
int check(int);
int main(){
    int i,num;
    cout<<"Enter the Number to check fibonacci or Not"<<endl;
    cin>>num;
    check(num)==1?cout<<"Number is Fibonacci":cout<<"Not Fibonacci";

}

int check(int n){
    int a=0,b=1,c=0;
    while(c<=n){
        c=a+b;
        a=b;
        b=c;
     if(c==n){
        return 1;
     }
    }
    return 0;
}
