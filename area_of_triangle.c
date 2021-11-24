#include<stdio.h>
void main(){
    float base,height,area;
    printf("Enter the height of the triangle: ");
    scanf("%f",&height);
    printf("Enter the base of the triangle: ");
    scanf("%f",&base);
    area = 0.5*base*height;
    printf("The area of the traingle is %0.2f\n",area);
}
