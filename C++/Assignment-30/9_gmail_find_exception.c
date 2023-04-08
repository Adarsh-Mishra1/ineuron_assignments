#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;

int main(){
        int count=0;
        int is_symbol;
        char gmail[30];
        int is_num=0,special=0,upper_alphabet=0;

        try{
            cout<<"enter the gmail"<<endl;
            gets(gmail);
            is_exist=str.find(gmail,"gmail.com");
            cout<<is_exist<<endl;

            while(gmail[count]!='\0'){
                if(isdigit(gmail[count])){
                   is_num=1;
                }else{
                    if((gmail[count]>='A'&&gmail[count]<='Z')){
                        upper_alphabet=1;
                    }else{
                        special=1;
                    }
                }
                count++;
            }


        }catch(int x){

                cout<<"In-valid gmail(It should not be less than 6,should have digit and special char"<<endl;
        }catch(...){
            cout<<"Other Type of Exceptions"<<endl;
        }
}



