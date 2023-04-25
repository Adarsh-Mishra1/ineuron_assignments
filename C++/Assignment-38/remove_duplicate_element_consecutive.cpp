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
    //First Sorted the element,now it is in consecutive order
    ls.sort();
    cout<<"Sorted List:"<<endl;
    display(ls);
    //deleted the duplicate elements,one element will remain of all duplicate
    cout<<"Unique Elements:"<<endl;
    ls.unique();
    display(ls);
   
    return 0;
}