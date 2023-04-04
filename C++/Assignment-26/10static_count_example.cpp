//10. Define a class StaticCount and create a static variable. Increment this variable in a
//function and call this 3 times and display the result.

#include<iostream>
using namespace std;
//creating class here

class StaticCount{
    private:
        static int count;
    public:

        void do_count(){
            count++;
        }

        void getCount(){
            cout<<count;
        }

};
int StaticCount::count;
int main(){
//creating object passing asguement for parametrized constructor
StaticCount obj;
obj.do_count();
obj.do_count();
obj.do_count();
obj.getCount();

return 0;
}
