#include<iostream>
using namespace std;

int main(){
        int pin,count=0;
        try{
            cout<<"enter the pin"<<endl;
            cin>>pin;
            while(pin!=0){
                pin=pin/10;
                count++;
            }
            if(count==6){
                throw 1;
            }else{
                 throw 0;
            }

    }catch(int x){
        if(x==1){
            cout<<"valid"<<endl;
        }else{
            cout<<"invalid"<<endl;
        }

    }
}



