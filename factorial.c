#include<stdio.h>
void main(){
    int n,fact=1;
    printf("Enter the number whose factorial is to be found: ");
    scanf("%d",&n);
    while(n>0){
        fact =fact*n;
        n -=1;
    }
    printf("The factorial of the above number is: %d",fact);
}