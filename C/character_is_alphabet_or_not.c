#include<stdio.h>

int main(){
    char a;
    printf("enter any char");
    scanf("%c",&a);
    

    if (a>=65 && a<=90 || a>=97 && a<=122) printf("this is an alphabet");
    else printf("this is not an alphabet");
}