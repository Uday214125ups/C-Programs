#include<stdio.h>

int main()
{
    long long int a=4;
    int b=&a;
    printf("%d",b);
   int* p=&a;
   printf("%p",p);
   
}