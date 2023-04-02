#include<iostream>
using namespace std;

class Square{
    private:
        int n;
        int sqr;
        static int count;
    public:
        void set(int x){
            n=x;
        }
        void get(){
            cout<<"Square of :"<<n<<" is "<<sqr<<endl;
        }
        void cal_square(){
            sqr=n*n;
            count++;
        }
        static int show_count(){
            return count;
        }

        
};

int Square::count=0;
int main(){
    //creating objects here
    Square obj1,obj2;
    obj1.set(2);
    obj1.cal_square();
    obj1.get();
    obj2.set(5);
    obj2.cal_square();
    obj2.get();
    cout<<endl<<"Function is callled "<<Square::show_count()<<" times";    
    return 0;

}