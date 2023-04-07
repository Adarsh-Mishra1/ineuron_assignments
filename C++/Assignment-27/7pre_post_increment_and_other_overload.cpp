#include<iostream>
using namespace std;

class fraction{
    private:
        long nume;
        long deno;
    public:

        void SetData(long x,long y){
            nume=x;
            deno=y;
        }


        fraction(){
            nume=0;
            deno=0;
        }


        //Here istream is anoher class for input and t is object of fraction
        //We passed refrence here becuase we want to take input in that object
        //if we passed here by value only we can read values but not write
        friend void operator >>(istream &input,fraction &t){
            cout<<"Enter the numerator"<<endl;
            input>>t.nume;
            cout<<"Enter the denominator"<<endl;
            input>>t.deno;

        }

        //Here i am getting ostream and fraction t(object) , ostream as reference
        //and t as value. Here t is passed by value beacuse we have to print the valeus only
        //but in >> operation t refrence needs to pass to take the input inside varaibles of t
        friend void operator <<(ostream &output,fraction t){
            output<<t.nume<<"/"<<t.deno<<endl;

        }

        void operator++ (){
            nume=++nume;
            deno=++deno;
        }

        //ImPortant: Here both function approx same
        //but to differentiate post / pre incrment
        //we need to send an arguement just to identify
        // as post incrment for complier, here i have passed
        //int arguement and rest lines as same as previous fuction
        //Keep in mind during post incrment we just need to pass and arugment
        // to tell the compiler that it is used for post incrment not pre otherwise
        //it will create ambiguity


        void operator++ (int dummy){
            nume=nume++;
            deno=deno++;
        }


};

int main(){
    fraction c1,c2,c3,c4;
    c1.SetData(22,34);
    //Pre Increment
    ++c1;
    //Post increment
    c1++;
    cout<<c1;
    //Extraction operator overloading
    cin>>c3;
    //Insertion operator overloading
    cout<<c3; //it is called as by friend function becuase cout is object of ostream class therefore it can't access member function
    //of fraction class but it can be passed by using friend function as arguement.
    //it is like <<(cout,c1);
    return 0;
}
