//Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;

class Counter{
    private:
        static int counter;
    public:
        //Default Construcuor
        Counter(){
            counter++;
        }

        void showCount(){
            cout<<"Counter:"<<counter<<endl;
        }
};

int Counter::counter;

int main(){
//Every time obj is created default constructor is called and counter incrmented by one
Counter obj1,obj2,obj3;
obj1.showCount();


return 0;
}
