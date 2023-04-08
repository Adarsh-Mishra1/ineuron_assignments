#include<iostream>
#include<ctype.h>
#include<regex>
using namespace std;

int main(){
        int count=0,space=0;
        int is_symbol;
        char nickname[30];
        int is_num=0,special=0,upper_alphabet=0;
        try{
            cout<<"enter the nickname"<<endl;
            gets(nickname);
            while(nickname[count]!='\0'){
                //if(nickname[i]==)

                if(isdigit(nickname[count])){
                   is_num=1;
                }else{
                    if((nickname[count]>='a'&&nickname[count]<='z')||(nickname[count]>='A'&&nickname[count]<='Z')){
                        upper_alphabet=1;
                    }else{
                        if(nickname[count]==' '){
                            space=1;
                        }else{
                            special=1;
                        }

                    }
                }
                count++;
            }

             if(count>8||is_num!=0||special!=0||space!=0){
               throw 0;
            }else{
                cout<<"valid Nickname :"<<nickname<<endl;
            }

    }catch(int x){
            cout<<"In-valid nickname(It should not be greater than 8,shouldn't have digit and special char and space"<<endl;
    }catch(...){
        cout<<"Other Type of Exceptions"<<endl;
    }
}



