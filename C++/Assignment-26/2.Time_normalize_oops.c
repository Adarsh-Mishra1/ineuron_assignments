#include <iostream>
using namespace std;

class Time{
    private:
        int h;
        int m;
        int s;
    public:
        void ShowTime(void){
            cout<<h<<":"<<m<<":"<<s;
        }

        void setTime(int hh,int mm, int ss){
            h=hh;
            m=mm;
            s=ss;
        }

        void normalize(void){
            h=h+m/60;
            m=m+s/60;
            m=m%60;
            s=s%60;
        }

        void Time add(Time s){
            Time temp;
            temp.h=h+s.h;
            temp.s=s+s.s;
            temp.m=m+s.h;

            return temp;
        }

};

int main(){
    Time obj,obj1,obj2;
    obj.setTime(3,66,78);
    obj1.setTime(3,40,50);
    obj.ShowTime();
    obj1.ShowTime();
    obj.normalize();
    cout<<"Normalised Time:"<<obj.ShowTime();
    //Here adding obj1 and obj2 and assigning it to obj3
    obj3=obj1.add(obj2);
    obj3.ShowTime();
    return 0;
}
