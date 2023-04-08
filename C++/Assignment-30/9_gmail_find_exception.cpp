#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

int main(){
        int count=0,i=0;
        char gmail[30];
        char temp[30];

        try{
            cout<<"enter the gmail"<<endl;
            gets(gmail);
            while(gmail[count]!='\0'){
                if(gmail[count]=='@'){
                   break;
                }
                count++;
            }
            //Here i have copied the content of gmail string to temp string from index where
            //@found in gmail and then compared the string with @gmail.com to check format
            //In short i have copied the elements from string from where @ symbol is started
            while(gmail[count]!='\0'){
                //Therfore used here count variable becuse in previous loops the index is
                //stored in this variable
                temp[i]=gmail[count];
                i++;
                count++;
            }

            if(strcmp(temp,"@gmail.com")!=0){
                throw 0;
            }
            cout<<"Correct Format:"<<gmail<<endl;

        }catch(int x){
                cout<<"In-valid gmail format"<<endl;
        }catch(...){
            cout<<"Other Type of Exceptions"<<endl;
        }
}



