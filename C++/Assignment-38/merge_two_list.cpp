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
    list<int>ls{80,20,50,3,60,40};
    list<int>ls2{5,6,9};
    cout<<"First List"<<endl;
    display(ls);
    cout<<"Second List :"<<endl;
    display(ls2);
    ls2.merge(ls); //ls merged itno list2, after merging the merged list will be blank,its live move operations
    cout<<"List 1 is merged to list 2"<<endl;
    display(ls2);
   
    return 0;
}