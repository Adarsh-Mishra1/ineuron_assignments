#include<iostream>
using namespace std;

class area{
    private:
        float side,len,brth,r;
    public:
        void setside(float x){
            side=x;
        }
        void setradius(float radius){
            r=radius;
        }

        void setlenbrth(float len,float breadth){
            len=len;
            brth=breadth;
        }

        float square(){
            return side*side;
        }

        float rectangle(){
            return 2*(len+brth);
        }

        float circle(){
            return 3.14*r*r;
        } 
};

int main(){
    area a;
    a.setside(5.5);
    a.setradius(1);
    a.setlenbrth(4,5);
    cout<<"Area of Square is:"<<a.square;
    cout<<"Area of Circle is:"<<a.circle;
    cout<<"Area of Rectangle is:"<<a.rectangle;

}