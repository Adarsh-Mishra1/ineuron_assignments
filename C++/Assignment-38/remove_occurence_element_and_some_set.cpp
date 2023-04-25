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
    list<int>ls{3,8,2,5,2,3,6,4};
    display(ls);
    //First Sorted the element
    ls.sort();
    cout<<"Sorted List:"<<endl;
    display(ls);
    //deleted the duplicate elements,one element will remain of all duplicate
    cout<<"Unique Elements:"<<endl;
    ls.unique();
    display(ls);
    //To remove any element
    cout<<"Element 8 is removed"<<endl;
    ls.remove(8);

    //To erase element
    list<int>::iterator it;
    it=ls.begin(); //first element pointing iterator
    ls.erase(it); //we have to provide iterator to erase element on that position during erase function
    cout<<"After Erased:"<<endl;
    display(ls);
    return 0;
}