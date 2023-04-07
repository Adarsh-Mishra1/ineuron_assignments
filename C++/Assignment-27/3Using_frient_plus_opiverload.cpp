#include<iostream>
using namespace std;

class Complex{
    private:
        int r;
        int imag;
    public:
        void SetData(int x,int y){
            r=x;
            imag=y;

        }

        void GetData(){
            cout<<r<<"i+"<<imag<<"j"<<endl;
        }

        friend Complex operator+(Complex ,Complex );


};
Complex operator+(Complex s1,Complex s2){
    Complex temp;
    temp.r=s2.r+s1.r;
    temp.imag=s2.imag+s1.imag;
    return temp;
}

int main(){
    Complex c1,c2,c3;
    cout<<"C1=";
    c1.SetData(3,4);
    c1.GetData();
    cout<<"C2=";
    c2.SetData(2,5);
    c2.GetData();
    cout<<"c3=c1+c2"<<endl;
    c3=c1+c2;
    c3.GetData();
    return 0;
}
