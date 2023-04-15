#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
//vector with initilization
vector<int>v1={3,4,5,6};
int i;

reverse(v1.begin(),v1.end());

for(i=0;i<v1.size();i++){
    cout<<" "<<v1[i];
}

return 0;
}