#include<stdio.h>

int main(){

    int food,water,d1,d2,sd;

    int a;
    scanf("%d",&a);

    for (int i = 0; i < a; i++)
    {
        scanf("%d%d%d%d%d",&food,&water,&d1,&d2,&sd);

        int b=food/d1;
        int c= water/d2;

        if (b<c){

            if (sd>=b) printf("NO");
            else printf("YES");
        }
        if (b>c){

            if (sd>c) printf("No");
            else printf("Yes");
        }
        
    }

}