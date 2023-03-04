#include<iostream>
using namespace std;

class time{
    private:
        int h;
        int m;
        int s;
    public:
        void set_time(int hour,int min,int sec){
            h=hour;
            m=min;
            sec=s;

        }
        void show_time(){
            cout<<h<<" : "<<m<<" : "<<t<<endl;
        }
};

int main(){
    time a;
    a.set_time(6,34,22);
    a.show_time();
    return 0;
}