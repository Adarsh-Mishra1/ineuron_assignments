#include<iostream>
using namespace std;

class demo{
    private:
        int a;
        int b;
        int c;
        int greatest;
    public:
        void set(int x,int y,int z){
            a=x;
            b=y;
            c=z;
        }
        void get(){
            cout<<"From "<<a<<" "<<b<<" "<<c<<"largest is:"<<c;
        }
        void cal_largest(){
            if(a>b&&a>c){
                greatest=a;
            }else{
                if(b>a&&b>c){
                    greatest=b;
                }else{
                    greatest=c;
                }
            }
        }
        
};


int main(){
    //creating objects here
    demo obj1;
    obj1.set(5,5,7);
    obj1.cal_largest();
    obj1.get();
    
    return 0;

}