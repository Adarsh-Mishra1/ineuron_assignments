#include<iostream>
#include<list>
#include<iterator>
#include<string>
using namespace std;

void display(list<string>demo){
    list<string>::iterator it;
    for(it=demo.begin();it!=demo.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
}



int main(){
    list<string>ls;
    string str;
    while(1){
        cout<<"Plase Enter"<<endl;
        getline(cin,str); //
        if(str=="EXIT"){
            break;
        }

        //Here every time pushing date to list
        ls.push_back(str);

    }
    
    //ls.assign(4,10); //4 is Number of elements to be assign and 10 is value of every element
    cout<<"List (ls):"<<endl;
    display(ls);

    //Reverse Display using reverse iterator
    cout<<"Reverse Order:"<<endl;
    list<string>::reverse_iterator it;
    for(it=ls.rbegin();it!=ls.rend();it++){
        cout<<*it<<" ";
    }

    return 0;
}