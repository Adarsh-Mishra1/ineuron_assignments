//Define a class Date and Write a program to Show Date using Constructor.
#include<iostream>
using namespace std;

class Date{
    private:
        int d;
        int m;
        int y;
    public:
        //Default Construcuor
        Date(int a,int b,int c){
            d=a;
            m=b;
            y=c;
        }

        void showDate(){
            cout<<"Date:"<<d<<"-"<<m<<"-"<<y<<endl;
        }
};

int main(){
//Every time obj is created default constructor is called and Date incrmented by one
Date d1(5,4,2023);
d1.showDate();


return 0;
}
