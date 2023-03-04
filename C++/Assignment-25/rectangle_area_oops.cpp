#include<iostream>
using namespace std;

class area{
    private:
        int a;
        int b;
        int area;
    public:
        void set(int x,int y){
            a=x;
            b=y;
        }
        void get(){
            cout<<"Area of reactangle having sides "<<a<<" "<<b<<" is:"<<area;
        }
        void cal_area(){
            area=a*b;
        }
        
};


int main(){
    //creating objects here
    area obj1;
    obj1.set(5,7);
    obj1.cal_area();
    obj1.get();
    return 0;
}