#include<iostream>
using namespace std;
int find_odd(int arr[],int n)
{
    int res=0,i;
    for(i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}

int main(){
int arr[7]={3,3,9,12,9,4,4};
int n=7;
cout<<find_odd(arr,n);
return 0;
}
