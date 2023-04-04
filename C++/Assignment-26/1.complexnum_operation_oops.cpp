#include<iostream>
using namespace std;

class Complex{
    private:
        int i;
        int j;
    public:
        void setData(int a, int b){
            i=a;
            j=b;
        }

        void ShowData(){
            cout<<i<<"+"<<j<<"j";
        }

        Complex add(Complex s){
            //Here we are getting the values of a object directly beacause a called this function
            //we are acessing the value of object b by passing b as arguement , here object b is accepted in formal arguenet in object s
            //Because we have to return a complex type object, so we will create a object to store sum and reuturn
            Complex temp;
            temp.i=i+s.i;   //real part
            temp.j=j+s.j; //imaginary part
            //cout<<i<<" "<<j<<endl;
            //cout<<s.i<<" "<<s.j;
            //here returned temp object after adding the values of object a,b
            return temp;
        }

};


int main(){
    Complex a,b,c;
    a.setData(3,5);
    b.setData(4,3);
    //Called add function , pass a directly and b as arguement
    c=a.add(b);
    c.ShowData();
    return 0;
}
