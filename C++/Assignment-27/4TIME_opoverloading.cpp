#include<iostream>
using namespace std;

class Time{
    private:
        int h;
        int m;
        int s;
    public:

        void SetData(int x,int y ,int z){
            h=x;
            m=y;
            s=z;
        }

        void GetData(){
            cout<<h<<":"<<m<<":"<<s<<endl;
        }

        Time(){
            h=0;
            m=0;
            s=0;
        }


        //Here istream is anoher class for input and t is object of Time
        //We passed refrence here becuase we want to take input in that object
        //if we passed here by value only we can read values but not write
        friend int operator >>(istream &input,Time &t){
            cout<<"Enter the hour"<<endl;
            input>>t.h;
            cout<<"Enter the minute"<<endl;
            input>>t.m;
            cout<<"Enter the second"<<endl;
            input>>t.s;

            t.m=t.m+t.s/60;
            t.s=t.s%60;
            t.h=t.h+t.m/60;
            t.m=t.m%60;

            if(t.h>=25){
                return 1;
            }else{
                return 0;
            }

        }

        //Here i am getting ostream and Time t(object) , ostream as reference
        //and t as value. Here t is passed by value beacuse we have to print the valeus only
        //but in >> operation t refrence needs to pass to take the input inside varaibles of t
        friend void operator <<(ostream &output,Time t){
            output<<t.h<<":"<<t.m<<":"<<t.s<<endl;

        }


        void operator==(Time c){
            int t1,t2;
            //Converting all time into scond then comparing total second values
            t1=((h*3600)+(m*60)+s);
            t2=((c.h*3600)+(c.m*60)+(c.s));
            if(t1==t2){
                cout<<"Equal"<<endl;
            }else{
                cout<<"Not Equal"<<endl;
            }

        }
};

int main(){
    Time c1,c2,c3,c4;
    c1.SetData(6,44,55);
    c2.SetData(6,44,55);
    //c1.GetData();
    //c2.GetData();
    c2==c1;
    cout<<"Operator >>"<<endl;
    //Extraction operator oveloading
    if(cin>>c1){
        cout<<"invalid Input"<<endl;
    };
    //Insertion operator overloading
    cout<<c1; //it is called as by friend function becuase cout is object of ostream class therefore it can't access member function
    //of time class but it can be passed by using friend function as arguement.
    //it is like <<(cout,c1);
    return 0;
}
