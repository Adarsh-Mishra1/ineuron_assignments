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

        Complex operator+(Complex s){
            Complex temp;
            temp.r=r+s.r;
            temp.imag=imag+s.imag;
            return temp;
        }

        Complex operator-(Complex s){
            Complex temp;
            temp.r=r-s.r;
            temp.imag=imag-s.imag;
            return temp;
        }

        Complex operator*(Complex s){
            Complex temp;
            temp.r=r*s.r;
            temp.imag=imag*s.imag;
            return temp;
        }

        void operator==(Complex s){
            if(r==s.r&&imag==s.imag){
                cout<<"Equal"<<endl;
            }else{
                cout<<"Not Equal"<<endl;
            }

        }




};

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
    cout<<"c3=c3*c2"<<endl;
    c1=c3*c2;
    c1.GetData();
    cout<<"c3=c1-c2"<<endl;
    c3=c1-c2;
    c3.GetData();
    cout<<"c1==c2"<<endl;
    c1==c2;
    return 0;
}
