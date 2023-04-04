/*
3. Define a class Box and calculate Volume of Box and initialise it using constructor.
*/
#include<iostream>
using namespace std;
//creating class here

class Box{
    private:
        int l;
        int b;
        int h;
    public:

        Box(){
            cout<<"Please enter length,breadth,height"<<endl;
            cin>>l>>b>>h;
        }

        void volume(){
            cout<<"Volume:"<<l*b*h<<endl;
        }

};
int main(){
//creating object passing asguement for parametrized constructor
Box obj;
obj.volume();
return 0;
}
