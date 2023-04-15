#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
//vector with initilization
vector<int>v1={3,4,5,6};

cout<<"Min element :"<<*min_element(v1.begin(),v1.end());
cout<<"\n Max element :"<<*max_element(v1.begin(),v1.end());
return 0;
}