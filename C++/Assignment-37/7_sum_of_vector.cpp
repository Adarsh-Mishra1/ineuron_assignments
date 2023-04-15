#include<iostream>
#include<vector>
#include<numeric> //for accumulate function
using namespace std;

int main(){
    int sum;
    vector <int> v = {3,5,6,12,1,5};
    /*
    for(auto ele:v){
        sum+=ele;

    }
    */
    //OR
    sum=accumulate(v.begin(),v.end(),0); //here 0 denotes what initial value we want to give to sum, begin and end are iterators
    cout<<"Sum :"<<sum<<endl;
    return 0;
}