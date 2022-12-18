/* Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed */
#include<stdio.h>
void fact();

int main(){
    int i,j,flag=0;
    char str2[10];
    char str[5][40]={"adarsh@mail.com","mymai@mail.com","testmail","mymail@mail.com","abc@mail.com" };
    char str1[5][40]={"12345","00000","23423","123321","987789" };

    printf("Enter the mail to login :");
    gets(str2);
    for(i=0;i<5;i++){
      if((strcmp(str[i],str2)&&strcmp(str[i],str1))==1){
        flag=1;
        printf("Login Successfull:%s",str[i]);
        fact();
      }
    }
    if(flag==0){
        printf("User not found,check mail id");
    }
return 0;
}
void fact(){
int n,i,f;
f=i=1;
printf("\nEnter a Number to Find Factorial: ");
scanf("%d",&n);
while(i<=n)
{
 f*=i;
 i++;
}
printf("The Factorial of %d is : %d",n,f);
}
