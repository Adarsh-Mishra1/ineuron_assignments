#include<iostream>
#include<algorithm>
#include<iterator>
#include<list>
using namespace std;

void display(list<int>temp){
    cout<<"List : "<<endl;
    list<int>::iterator it;
    for(it=temp.begin();it!=temp.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int>ls;
    list<int>ls2{5,6,9};
    cout<<"First List"<<endl;
    display(ls);
    cout<<"Second List :"<<endl;
    display(ls2);
    ls.assign(ls2.begin(),ls2.end()); //ls2 assigned itno ls, begin and end iterators are parameters of list which we want to assign(list2)
    cout<<"List 2 is assigned to list 1"<<endl;
    cout<<"Now ls is"<<endl;
    display(ls);
   
    return 0;
}