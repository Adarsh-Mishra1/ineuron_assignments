#include<iostream>
using namespace std;
//Program to overload unary operator(-)

class Numbers{
    private:
        int x,y,z;
    public:
        void getData(){
            cout<<x<<","<<y<<","<<z<<endl;
        }

        Numbers(int a,int b,int c);
        void operator-(void);

};
Numbers::Numbers(int a,int b,int c){
    x=a;
    y=b;
    z=c;
}

void Numbers::operator-(void){
    x=-x;
    y=-y;
    z=-z;
}

int main(){
    Numbers obj(2,-4,6);
    obj.getData();
    //Calling - operator member function
    -obj; //obj.operator-
    obj.getData();
return 0;
}
