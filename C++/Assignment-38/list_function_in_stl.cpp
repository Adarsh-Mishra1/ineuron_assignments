#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void display(list<int>demo){
    list<int>::iterator it;
    for(it=demo.begin();it!=demo.end();it++){
        cout<<*it<<" ";
    }
}

int main(){
    //Declaration
    list<int> ls1;
    //Declaration with Intialization
    list<int>ls{1,2,3,4,5};
    //Functions in list
    //front element
    cout<<"Front Element:"<<ls.front()<<endl;
    //back or last element
    cout<<"back element:"<<ls.back()<<endl;
    //size
    cout<<"size : "<<ls.size()<<endl;
    cout<<"Before Push:"<<endl;
    for(auto i:ls){
        cout<<i<<" ";
    }
    
    //push at front and back
    ls.push_front(6);
    ls.push_back(6);
    cout<<"\nAfter Push : ";
    display(ls);

    //push at front and back
    cout<<"After Pop :";
    ls.pop_front();
    ls.pop_back();

    //iterate through iterator
    display(ls);
    return 0;
}