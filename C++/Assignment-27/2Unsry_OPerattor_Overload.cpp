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



        void operator--(){
            --r;
            --imag;
        }

        void operator++(){
            ++r;
            ++imag;
        }

};

int main(){
    Complex c1;
    c1.SetData(2,4);
    //Here Decremented
    --c1;
    c1.GetData();
    //Here Incremented
    ++c1;
    c1.GetData();


    return 0;
}
