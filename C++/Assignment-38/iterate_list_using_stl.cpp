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
    list<int>ls{1,2,3,4,5};
    //ls.assign(4,10); //4 is Number of elements to be assign and 10 is value of every element
    cout<<"List (ls):"<<endl;
    display(ls);

    //Reverse Display using reverse iterator
    list<int>::reverse_iterator it;
    for(it=ls.rbegin();it!=ls.rend();it++){
        cout<<*it<<" ";
    }

    return 0;
}