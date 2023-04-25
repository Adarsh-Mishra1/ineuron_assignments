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
    //Declaration with Intialization
    list<int>ls;
    //size
    //cout<<"size : "<<ls.size()<<endl;
    
    for(int i=1;i<5;i++){
        ls.push_back(i*2);
    }
    
    
    for(auto j:ls){
        cout<<j<<" ";  
    }
    //Printting list
    //display(ls);

    return 0;
}