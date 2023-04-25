#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main(){
    list<int>ls{1,2,3,4,5};
    //ls.assign(4,10); //4 is Number of elements to be assign and 10 is value of every element
    //Reverse Display using reverse iterator
    list<int>::reverse_iterator it;
    for(it=ls.rbegin();it!=ls.rend();it++){
        cout<<*it<<" ";
    }

    return 0;
}