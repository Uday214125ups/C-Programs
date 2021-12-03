#include<stdio.h>

int main(){
    int a,b,c,sum=0,d;
    printf("enter any number to check wether it is an armstrong number or not;");
    scanf("%d",&a);
    d=a;

    for(a;a>0;a/=10){
        b = a%10;
        c=b*b*b;
        sum=sum+c;
    }
    if (sum==d){
    printf("given num is perfect");  
    }

    else{printf("given num is not perfect");}  
    
}