//CPP Program to find the greatest digits from given number
#include<iostream>
using namespace std;

//Function declaration here
int fun(int);

int main(){
    int num,res=0;
    cout<<"Enter any Positive Number"<<endl;
    cin>>num;
    cout<<"Highest Number from "<<num<<"is "<<fun(num);
}

int fun(int n){
     int i,digit,greater=0;
     while(n!=0){
        digit=n%10;
        n=n/10;
        if(digit>greater){
            greater=digit;
        }
     }
     return greater;
}

