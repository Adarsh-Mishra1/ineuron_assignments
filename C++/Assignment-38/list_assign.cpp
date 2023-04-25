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
    list<int>ls;
    ls.assign(4,10); //4 is Number of elements to be assign and 10 is value of every element
    cout<<"First List (ls):"<<endl;
    display(ls);

    //here creating new list
    //assigning ls values to list2
    list<int>list2;
    cout<<"Second List (list2):"<<endl;
    list2.assign(ls.begin(),ls.end());
    display(list2);

    //Assigning Array to list
    cout<<"After Array is assigned:"<<endl;
    int arr[]={7,8,3,4,5};
    ls.assign(arr,arr+6); //name of array and num of element we want to assign
    display(ls);

    return 0;
}