#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
    int sum;
    vector <float> v = {12.3,1.5};
    v.push_back(11.2);
    v.push_back(4.2);
    v.push_back(7.2);
    v.push_back(9.2);
    vector<float>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" , ";
    }

    return 0;
}