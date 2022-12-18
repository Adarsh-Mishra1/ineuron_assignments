#include<stdio.h>
  #include<math.h>
  #include<string.h>
  int main()
  {
      int i=0,s1=0,s2=0,min=0,flag=0;
      char str[5][20]={"sandeep","sanjay","kumar","nishad","class"};
      char w1[]="sanjay";
      char w2[]="class";
      for(i=0;i<5;i++)
      {
          if(strcmp(str[i],w1)==0)
            s1=i;
          if(strcmp(str[i],w2)==0)
          {
             s2=i;
             flag=1;
          }

      }
      if(flag==0)
        printf("minimum distance can't found");
      else
      {
          min=abs(s1-s2);
          printf("Minimum distance is %d ",min-1);
      }
  }
