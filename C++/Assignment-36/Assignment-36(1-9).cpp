
//Program 1 -8 STL Arrays
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){
array<int,3>arr1;
int arr2[6]={3,5,77,6,4,32},i;
//set array values
arr1[0]=8;
arr1[1]=9;
arr1[2]=10;

//get values
//cout<<arr1.at(0)<<endl;
cout<<get<0>(arr1)<<endl;
cout<<get<1>(arr1)<<endl;
cout<<get<2>(arr1)<<endl;

//Total Number of array function
cout<<"Array Size:"<<arr1.size()<<endl;

//Find the first and last element using the STL array.
cout<<"first Elment"<<arr1.front()<<endl;
cout<<"last Elment"<<arr1.back()<<endl;

//Returns the element from the given index using the STL array.
cout<<"AT index 1 value :"<<arr1.at(1)<<endl;

//C++ STL program to demonstrate example of array::rbegin() and array::rend()
//functions
cout<<"Array Rbegin"<<*arr1.rbegin()<<endl; //rbegin returns a reverse order iterator pointing to last element,it will give point last element of array
cout<<"Array Rend"<<*(arr1.rend()-1)<<endl;
cout<<"Reverse rbegin"<<endl;
for(auto i=arr1.rbegin();i!=arr1.rend();i++){
    cout<<*i<<endl;
}

if(!arr1.empty()){
    cout<<"Array is not empty"<<endl;
}else{
    cout<<"Array is empty"<<endl;
}

//Sort the array ascending
sort(arr2,arr2+6);
//sort(arr2+2,arr2+4);
 //sort functio not belongs to array class, it can work on normal array.
//while using sort function we can change the index value from which to which we need to sort
//example: to sort from index 2 to 4 sort(arr+2,arr+4);
    cout<<"Array is Sorted:"<<endl;
    for(i=0;i<6;i++){
        cout<<arr2[i]<<" ";
    }
cout<<"\n";
//For descending order sort
cout<<"Descending Order Sort"<<endl;
sort(arr2,arr2+6,greater<>());
for(i=0;i<6;i++){
        cout<<arr2[i]<<" ";
}

return 0;
}

