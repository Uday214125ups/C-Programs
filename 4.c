#include<stdio.h>

int main(){
    int a,b,c,i,sum=0;

    printf("enter from where u wANT start Fibonacci");
    scanf("%d",&a);

    b=a+1;
    printf("enter till where u wANT start Fibonacci");
    scanf("%d",&c);

    
    printf("Your Fibonacci series is:");
    for(i=b;i<=c;++i){
        sum+=i;
        printf("%d",sum);
    }
    
}