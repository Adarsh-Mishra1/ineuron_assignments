/*
Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.
*/
#include<iostream>
using namespace std;
//creating class here

class Bill{
    private:
        int id;
        char name[30];
        int unit;
    public:

        void get(){
            cout<<"Enter the id , name and unit"<<endl;
            cin>>id>>name>>unit;
        }

        void calculate_bill(){
            float amount=0;
            if(unit>200){
                amount=unit*3;
            }else{
                if(unit>=100&&unit<=200){
                    amount=unit*2;
                }else{
                    amount=unit*1.20;
                }
            }
            cout<<"Amount is:"<<amount<<endl;
        }

};
int main(){
//creating object passing asguement for parametrized constructor
Bill obj;
obj.get();
obj.calculate_bill();
return 0;
}
