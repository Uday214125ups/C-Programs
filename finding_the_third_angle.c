#include<stdio.h>
void main(){
    float a,b,c;
    printf("Enter the first angle: ");
    scanf("%f",&a);
    printf("Enter the second angle: ");
    scanf("%f",&b);
    c = 180-(a+b);
    printf("By applying the sum of interior angle porperty the thrid angle is %0.2f\n",c);
}