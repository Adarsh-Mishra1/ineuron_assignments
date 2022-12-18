
//10.Create an authentication system.it should be menu driven



#include<stdio.h>
#include<string.h>
int main()
{
    char str[3][2][20]={{"sandeep","955916"},
                          {"vinay","9721"},
                          {"Roshan","8940"}
                        };

   char username[]="Rohan";
   char password[]="8940";
   int i=0,flag=0;
   for(i=0;i<3;i++)
   {
       if(strcmp(username,str[i][0])==0 && strcmp(password,str[i][1])==0)
       {
           printf("login successful");
           flag=1;
       }
   }
   if(flag==0)
    printf("username or password is invalid");
   return 0;
}
