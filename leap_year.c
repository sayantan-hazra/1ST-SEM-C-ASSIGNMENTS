/* Write a C program to check whether a year is leap year or not. */

#include<stdio.h>
int main(){
    int year;
    printf("ENTER A NUMBER: ");
    scanf("%d",&year);
    if(year%4==0)
    printf("IT IS AN LEAP YEAR");
    else
    printf("IS IS NOT AN LEAP YEAR");
    return 0;
}