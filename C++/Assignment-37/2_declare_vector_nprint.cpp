#include<iostream>
#include<vector>
using namespace std;

int main(){
//vector with initilization
vector<int>v;
int i,n;

//insert element at any position but with iterator position

v.insert(v.begin(),4); //it will insert 4 at first postiion

cout<<"Enter the number of elments you want to insert"<<endl;
cin>>n;
for(i=0;i<n;i++){
    v.push_back(i);
}


for(i=0;i<v.size();i++){
    cout<<v[i]<<" "<<endl;
}
//or 
//like foreach loop
for(int ele:v){
    cout<<" "<<ele;
}

}