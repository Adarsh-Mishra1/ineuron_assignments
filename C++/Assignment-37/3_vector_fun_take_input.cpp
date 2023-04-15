#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> &vect,int n){
    int i,num;
    for(i=0;i<n;i++){
        cout<<"enter the elment to insert:"<<endl;
        cin>>num;
        vect.push_back(num);
    }
}

int main(){
//vector with initilization
vector<int>v;
int i,n;
cout<<"Enter the no of element to insert"<<endl;
cin>>n;
insert(v,n);
for(i=0;i<v.size();i++){
    cout<<v[i];
}

}