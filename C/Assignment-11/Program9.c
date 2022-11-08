    // Print Square Number
    #include<stdio.h>
    int prime(int);

    int main(){
        int n=0,a=0,b=1,c=0,i=0;
        printf("Enter the Num:");
        scanf("%d",&n);
        sqr(n);
        return 0;
    }
    void sqr(int n){
        printf("%d",n*n);
        return 0;
    }

