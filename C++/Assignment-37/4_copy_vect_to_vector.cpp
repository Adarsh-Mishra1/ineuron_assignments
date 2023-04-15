#include<iostream>
#include<vector>
using namespace std;


int main(){
//vector with initilization
vector<int>v1={3,4,5,6};
vector<int>v2;
vector<int>v3;
vector<int>v4;
int i,n;

//Method 1 using loop
for(i=0;i<v1.size();i++){
    v2.push_back(v1[i]);
}

//Old vector
cout<<"Old Vector V1 :";
for(i=0;i<v1.size();i++){
    cout<<" "<<v1[i];
}
//new vector
cout<<"\n New Vector V2 :";

for(i=0;i<v2.size();i++){
    cout<<v2[i]<<" ";
}

//second Method using operator =
v3=v2;
//or insert function 
v4.insert(v4.begin(),v3.begin(),v3.end());
cout<<"\n New Vector V3 :";
for(i=0;i<v3.size();i++){
    cout<<v3[i]<<" ";
}

cout<<"\n New Vector V4 :";
for(i=0;i<v4.size();i++){
    cout<<v4[i]<<" ";
}
}