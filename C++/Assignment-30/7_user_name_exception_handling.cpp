#include<iostream>
#include<ctype.h>
#include<regex>
using namespace std;

const regex pattern("[^a-zA-Z0-9]+");

int main(){
        int count=0;
        int is_symbol;
        char password[30];
        int is_num=0,special=0;
        try{
            cout<<"enter the User Name"<<endl;
            gets(password);
            while(password[count]!='\0'){
                //if(password[i]==)

                if(isdigit(password[count])){
                   is_num=1;
                }else{
                    if(!(password[count]>='a'&&password[count]<='z'||password[count]>='A'&&password[count]<='Z')){
                        special=1;
                    }
                }
                count++;
            }




             if(count<6&&is_num==0&&special==0){
                cout<<"valid :"<<endl;
                cout<<"Less than 6, No Digit, No special chars"<<endl;
            }else{
                throw 0;
            }

    }catch(int x){

            cout<<"In-valid username"<<endl;

    }catch(...){
        cout<<"Other Type of Exceptions"<<endl;
    }
}



