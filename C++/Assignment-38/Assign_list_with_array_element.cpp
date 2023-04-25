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
    int arr[]={3,2,5};
    //Declaration with Intialization
    list<int>ls;
    //size
    cout<<"size : "<<ls.size()<<endl;
    cout<<"After Push:"<<endl;
    for(auto i:arr){
        //cout<<i<<" ";
        ls.push_back(i);
    }
    //We can also use that to assign array into list
    //ls.assign(arr,arr+3);

    //Printting list
    display(ls);

    return 0;
}