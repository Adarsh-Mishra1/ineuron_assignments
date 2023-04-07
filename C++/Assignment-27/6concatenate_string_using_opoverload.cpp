#include<iostream>
#include<string.h>
using namespace std;

class CString{
    private:
        char str[10];
    public:
        void SetData(void){
           cout<<"Enter the String"<<endl;
           cin>>str;
        }

        void GetData(){
            cout<<str<<endl;
        }



        CString operator+ (CString x){
            //created temp obj
            CString temp;
            //copied one string to temp str;
            strcpy(temp.str,str);
            //joined the x.str(second string) with first copied string in temp str
            strcat(temp.str,x.str);
            //returned to store c3=c1+c2;
            return temp;
        }

        void operator ==(CString obj){
            if(strcmp(str,obj.str)>0){
                cout<<"c2 str is greater"<<endl;
            }else{
                if(strcmp(str,obj.str)<0){
                  cout<<"c1 str is greater"<<endl;
                }else{
                    cout<<"Both are Equal"<<endl;
                }
            }
        }

};

int main(){
    CString c1,c2,c3,c4;
    c1.SetData();
    c2.SetData();
    //Here Comparing
    c1==c2;
    //Hera concatenating
    c3=c1+c2;// It is like c3=c1.Operator+(c2)
    c3.GetData();


    return 0;
}
