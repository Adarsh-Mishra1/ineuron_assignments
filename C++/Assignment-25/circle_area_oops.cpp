#include<iostream>
using namespace std;

class circle{
    private:
        int r;
        float area;
    public:
        void set(int x){
            r=x;
        }
        float get(){
            return area;
            //cout<<"Area of circle having radius "<<r<<" is:"<<area;
        }
        void cal_area(){
            area=3.14*r*r;
        }
        
};


int main(){
    //crerting objects here
    circle obj1;
    obj1.set(1);
    obj1.cal_area();
    cout<<"Area is:"<<obj1.get();
    //obj1.get();
    return 0;
}