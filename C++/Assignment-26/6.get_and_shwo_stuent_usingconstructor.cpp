//Define a class student show and intialize using conttuctor take input
#include<iostream>
using namespace std;

class Student{
    private:
        int roll;
        char name[20];
    public:
        //Default Construcuor
        Student(){
            cout<<"Enter roll and name"<<endl;
            cin>>roll>>name;
        }

        void showStudent(){
            cout<<"Student:"<<"roll no "<<roll<<" Name "<<name<<endl;
        }
};

int main(){
//Every time obj is created default constructor is called and Student incrmented by one
Student d1;
d1.showStudent();
return 0;
}
