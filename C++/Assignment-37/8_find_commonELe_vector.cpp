#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
//vector with initilization
vector<int>v1={3,4,5,6};
vector<int>v2={3,22,33,44};
int i;

//Sorting both the vectors
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());




for(i=0;i<v1.size();i++){
    cout<<" "<<v1[i];
}
cout<<"\n";
for(i=0;i<v2.size();i++){
    cout<<" "<<v2[i];
}

//Here creating new vector with size of v1+v2
vector<int>v3(v1.size()+v2.size());
//creating iterator
vector<int>::iterator it,a;
a=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

//Here displaying elements
cout<<"\n Common Elements are"<<endl;
for(it=v3.begin();it!=v3.end();it++){
    //Just to hide other index which are 0
    if(*it!=0){
        cout<<*it<<" ";
    }
}

return 0;
}