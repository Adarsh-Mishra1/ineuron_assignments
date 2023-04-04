/*
3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
*/
#include<iostream>
using namespace std;
//creating class here

class Cube{
    private:
        double side;
    public:

        Cube(double x){
            //Parametrized Constructor for initialization
            side=x;
        }

        void volume(){
            cout<<"Volume:"<<side*side*side<<endl;
        }

};
int main(){
//creating object passing asguement for parametrized constructor
Cube obj(4);
obj.volume();

return 0;
}
