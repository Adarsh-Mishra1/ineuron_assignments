#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void display(list<int>demo){
    //using const iterator
    list<int>::const_iterator it;
    for(it=demo.begin();it!=demo.end();it++){
        cout<<*it<<" ";
        //*it=5; here it will produce error
        
    }
    //suppost we write
    // Normal iterator it=5; it will assign 5 on that current location where it will point
    // Const Iterator it=5 it will produce error , const iterator can't modified
   
    /* Normal Iterator Example
    list<int>::iterator t;
    for(t=demo.begin();t!=demo.end();t++){
        *t=5; //here it will not produce error, it will assign 5 to all the position
        cout<<*t<<" ";
    }
    */

}

int main(){
    //Declaration with Intialization
    list<int>ls;
    for(int i=1;i<5;i++){
        ls.push_back(i*2);
    }

    //Here displaying using Const Iterator not normal iterator
    //Const Iterator means we cannot modify the values which it points
    //but in the case of normal we can assign any value to location which
    //normal iterator is pointing
    display(ls);  
    return 0;
}