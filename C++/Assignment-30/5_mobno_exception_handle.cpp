#include<iostream>
using namespace std;

int main(){
        int mob,count=0;
        try{
            cout<<"enter the mobile no"<<endl;
            cin>>mob;
            while(mob!=0){
                mob=mob/10;
                count++;
            }
            if(count==10){
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



