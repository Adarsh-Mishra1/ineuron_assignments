#include<iostream>
using namespace std;

bool is_email(char *);
int main(){
        char email[55];
        try{
        cout<<"enter the email"<<endl;
        cin>>email;
        if(!is_email(email)){
            throw 0;
        }else{
            cout<<"email is valid"<<endl;
        }

    }catch(int){
        cout<<"invalid Email"<<endl;
    }
}

bool is_email(char *email){
    int atrate=0,i;
    int dot=0;
    int length=0;
    for(i=0; email[i]!='\0';i++){
        if(email[i]=='@'){
            atrate=i;
        }else{
            if(email[i]=='.'){
                dot=i;
            }
        }
        length++;
    }

    if(atrate==0||dot==0){
        return 0;
    }
    if(atrate>dot){
        return 0;
    }else{
        return (dot<(length-1));
    }

}

