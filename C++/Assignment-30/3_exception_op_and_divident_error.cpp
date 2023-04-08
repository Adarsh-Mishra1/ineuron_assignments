#include<iostream>
using namespace std;

int main(){
    int num1,num2,ans;
    char op;


    try{

        cout<<"Enter the first No"<<endl;
        cin>>num1;
        cout<<"Enter the Operator "<<endl;
        cin>>op;

        if(op!='+'&&op!='-'&&op!='*'&&op!='/'&&op!='%'){
            throw op;
        }
        cout<<"Enter the num2"<<endl;
        cin>>num2;

        switch (op){
            case'+':
                ans=num1+num2;
                break;
            case'-':
                ans=num1-num2;
                break;
            case'*':
                ans=num1*num2;
                break;
            case'/':
                if(num2==0)
                    throw 0;
                ans=num1/num2;
                break;

        }
        cout<<"\n Answer :"<<ans<<"="<<num1<<op<<num2<<endl;
        }catch(const char op){
            cout<<"Invalid Operator :"<<op<<endl;
        }catch(const int n ){
            cout<<"divide by zero error:"<<n<<endl;
        }

}
