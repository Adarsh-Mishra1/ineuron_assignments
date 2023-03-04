#include<iostream>
using namespace std;

class fact{
    private:
        //int fact=1;
        int fact;
        int n;
    public:
        void set(int x){
            n=x;
        }
        void get(){
            cout<<"factorial of "<<n<<" is: "<<fact;
        }
        void cal_fact();
        /*void cal_fact(){
            int i,f=1;
            for(i=1;i<=n;i++){
                f=f*i;
                //cout<<fact<<"*"<<i<<endl;
            }
            fact=f;
        }
        */
};

void fact::cal_fact(){
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;
        //fact=fact*i;
        //cout<<fact<<"*"<<i<<endl;
    }
    fact=f;
}

int main(){
    //creating objects here
    fact obj1;
    obj1.set(5);
    obj1.cal_fact();
    obj1.get();
    
    return 0;

}