#include<iostream>
#include<ctype.h>
#include<regex>
using namespace std;

int main(){
        int count=0;
        int is_symbol;
        char password[30];
        int is_num=0,special=0,upper_alphabet=0;
        try{
            cout<<"enter the Password"<<endl;
            gets(password);
            while(password[count]!='\0'){
                //if(password[i]==)

                if(isdigit(password[count])){
                   is_num=1;
                }else{
                    if((password[count]>='A'&&password[count]<='Z')){
                        upper_alphabet=1;
                    }else{
                        if(!(password[count]>='a'&&password[count]<='z')){
                            special=1;
                        }

                    }
                }
                count++;
            }


            cout<<upper_alphabet<<special;
            //Password should contain more than 6,Upper Case and Special Symbol
             if(count<6||is_num==0||upper_alphabet==0||special==0){
               throw 0;
            }else{
                cout<<"valid :"<<endl;
                cout<<"More than 6 chars,Digit,special chars is contained"<<endl;
            }

    }catch(int x){

            cout<<"In-valid Password(It should not be less than 6,should have digit and special char"<<endl;
    }catch(...){
        cout<<"Other Type of Exceptions"<<endl;
    }
}



