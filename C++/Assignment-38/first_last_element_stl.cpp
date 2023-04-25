#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void display(list<int>demo){
    list<int>::iterator it;
    for(it=demo.begin();it!=demo.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
}

int main(){
    list<int>ls{3,2,5};
    //ls.assign(4,10); //4 is Number of elements to be assign and 10 is value of every element
    
    cout<<ls.front()<<endl;
    cout<<ls.back()<<endl;
    
    cout<<"List (ls):"<<endl;
    display(ls);

    
    return 0;
}