#include<stdio.h>
int main(){
    int first=0,second=1,third,n;
    printf("Please enter the number of terms for the fibonacci series: ");
    scanf("%d",&n);
    printf("The fibonacci series till %d is as follows: ",n);
    printf("%d,",first);
    printf(" %d,",second);
    while(n>2){
        third = first+second;
        printf(" %d,",third);
        first =second;
        second = third;
        n -= 1;

    }
}