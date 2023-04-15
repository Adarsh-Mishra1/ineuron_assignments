#include<iostream>
#include<vector>
using namespace std;

int main(){
//vector with initilization
vector<int>v={33,44,55,22,11};
int i;
for(i=0;i<v.size();i++){
    cout<<v[i]<<" "<<endl;
}
//or 
//like foreach loop
for(int ele:v){
    cout<<" "<<ele;
}

}