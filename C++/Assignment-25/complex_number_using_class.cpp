#include<iostream>
using namespace std;
class complex{
    private:
        int real;
        int img;
    public:
        void set(int r, int i){
            real=r;
            img=i;
        }
        void show(complex c){
            cout<<real<<"+"<<img<<"i"<<endl;
            cout<<c.real<<"+"<<c.img<<"i"<<endl;
            cout<<real+c.real<<"+"<<img+c.img<<"i";
        }
};

int main(){
    complex c1,c2;
    c1.set(4,6);
    c2.set(7,9);
    c1.show(c2);
    //c2.show();
    return 0;
}