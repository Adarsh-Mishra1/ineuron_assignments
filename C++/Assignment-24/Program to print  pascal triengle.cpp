#include<iostream>
using namespace std;
int fact(int);

int main(){
    int i,j,k,n=5,c,value=0;

    //Outer loop
    for(i=0;i<n;i++){
        //For column
        for(c=1;c<n-i;c++){
            cout<<"*";
        }
        for(j=0;j<=i;j++){
            cout<<" "<<fact(i)/(fact(j)*fact(i-j));
        }
        cout<<"\n";
    }
    //cout<<fact(n)<<endl;

}
//USING NORMAL LOGIC

int fact(int n){
    int fact=1;
     while(n>=1){
      fact+=fact*n;
      n--;
     }
    return fact;

}

/*
//USING RECURSION
int fact(int n){
    if(n==1){
        return n;
    }else{
        return n*fact(n-1);
    }
}
*/
