#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a  number"<<endl;
    cin>>num;
    char x[40]="It is Negative Number";
    try{
        if(num<0){
            throw x;
        }else{
            throw num;
        }
    }catch(int x){
            cout<<"Entered Number is:"<<x<<endl;
    }catch(char x[40]){
            cout<<"It is Negative Number"<<endl;
    }
}
