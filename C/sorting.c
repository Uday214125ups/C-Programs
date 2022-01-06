//design a program to sort an array of integers in less than n^2 operations.

#include<stdio.h>

int main(){
    int a,m=0;
    scanf("%d",&a);
    int b[a];
    for (int i=0; i<a; i++)
    {
        scanf("%d",&b[i]);
    }

    for (int i=0; i<a; i++)
    {
        for(int j=0; j<a-1; j++)
        {
       
            if (b[j]>b[j+1])
            {
                m=b[j];
                b[j]=b[j+1];
                b[j+1]=m;
            }
        }
    }
    for (int i=0; i<a; i++)
    {
        printf("%d",b[i]);
    }
}