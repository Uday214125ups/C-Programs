#include<stdio.h>
void main(){
    float english,hindi,math,science,sst,avg;
    printf("Enter the marks of english: ");
    scanf("%f",&english);
    printf("Enter the marks of hindi: ");
    scanf("%f",&hindi);
    printf("Enter the marks of math: ");
    scanf("%f",&math);
    printf("Enter the marks of science: ");
    scanf("%f",&science);
    printf("Enter the marks of sst: ");
    scanf("%f",&sst);
    avg = (english+hindi+math+science+sst)/5;
    printf("The average of the five subjects is %0.2f\n",avg);
}