#include<stdio.h>


int main(){
    int a,b,c,d,max;

    scanf("%d%d%d",&a,&b,&c);

    d=20-b;
    max=(d*6)*6+c;

    if(max>a) printf("YES");
    else printf("NO");
     
}