#include<stdio.h>

int main(){
    char b;
    printf("enter");
    scanf("%c",&b);
    char a[5]={1,2,3,4,5};
    int len=sizeof(a)/sizeof(a[0]);

    for (int i=0;i<len;i++){
        if (a[i]==b){printf("present in array");}
        else printf("not in array");
    }
}