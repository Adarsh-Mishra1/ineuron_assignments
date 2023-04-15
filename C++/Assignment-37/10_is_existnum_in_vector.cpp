#include<iostream>
#include<vector>
using namespace std;

int main(){
    int sum,n,is_exist;
    vector <int> v = {3,5,6,12,1,5};
    cout<<"Enter the element you want to search"<<endl;
    cin>>n;
    for(auto ele:v){
        if(n==ele){
            cout<<"Element "<<ele<<" exists"<<endl;
           is_exist=1;
           break;
        }

    }

    if(!is_exist){
        cout<<"Element is not found"<<endl;
    }

    return 0;
}