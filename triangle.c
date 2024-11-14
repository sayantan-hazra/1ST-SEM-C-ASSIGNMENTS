/* Write a C program to input angles of a triangle and check whether triangle is valid or not. */

#include<stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("ENTER THREE ANGLES OF THE TRIANGLE:\n");
    scanf("%d\n%d\n%d",&angle1,&angle2,&angle3);
    if(angle1+angle2+angle3==180)
    printf("IT IS AN VALID TRIANGLE");
    else
    printf("IT IS AN INVALID TRIANGLE");
    return 0;
}