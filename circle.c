/* Write a C program to input radius of a circle from user and find diameter, circumference and 
area of the circle. */ 

#include<stdio.h>
int main(){
    float r,pi=3.14;
    printf("ENTER RADIUS OF A CIRCLE: ");
    scanf("%f",&r);

    printf("DIAMETER OF CIRCLE: %f\n",2*r);
    printf("CIRCUMFERENCE OF CIRCLE: %f\n",2*pi*r);
    printf("AREA OF CIRCLE: %f\n",pi*r*r);
    return 0;
}