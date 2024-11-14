/* Write a C program to input principle, time and rate (P, T, R) from user and find Simple 
Interest. */

#include<stdio.h>
int main()
{
    int p,r,t;
    printf("ENTER PRINCIPLE: ");
    scanf("%d",&p);
    printf("ENTER RATE: ");
    scanf("%d",&r);
    printf("ENTER TIME: ");
    scanf("%d",&t);
    printf("SIMPLE INTEREST= %d",(p*r*t)/100);
    return 0;
}