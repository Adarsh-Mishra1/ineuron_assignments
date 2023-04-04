/*
Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor.
*/
#include<iostream>
using namespace std;
//creating class here

class Bank{
    private:
        float p;
        float r;
        float t;
    public:

        Bank(float a,float b, float c){
                    p=a;
                    r=b;
                    t=c;
        }

        void volume(){
            cout<<"SI:"<<((p*r*t)/100)<<endl;
        }

        getbank(){
            cout<<"Rate "<<r<<"Time "<<t<<"Principle "<<p<<endl;
        }

};
int main(){
//creating object passing asguement for parametrized constructor
Bank obj(2,3,4);
obj.volume();
obj.getbank();
return 0;
}
