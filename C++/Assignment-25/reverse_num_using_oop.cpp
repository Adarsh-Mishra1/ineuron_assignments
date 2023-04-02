#include<iostream>
using namespace std;

class ReverseNum{
    private:
        int n;
        int rev;
    public:
        void set(int x){
            n=x;
        }
        void get(){
            cout<<"Reverse of :"<<n<<" is "<<rev;
        }
        void cal_reverse();
        
};

void ReverseNum::cal_reverse(){
    int temp=n;
    int rnum=0;
    while(temp!=0){
        rnum=(rnum*10)+(temp%10);
        temp=temp/10;
    }
    rev=rnum;
}

int main(){
    //creating objects here
    ReverseNum obj1;
    obj1.set(235);
    obj1.cal_reverse();
    obj1.get();
    
    return 0;

}