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
        }
    }catch(int x){
            cout<<"Entered Number is Neg :"<<x<<endl;
    }catch(...){
            // ... means such exceptions which are new,Those who are not defined in any catch block
            cout<<"New Exception:"<<endl;
    }
}
