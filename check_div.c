/*Write a C program to check whether a number is divisible by 5 and 11 .*/

#include<stdio.h>
int main(){
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    if(num%5==0&&num%11==0)
    printf("%d is divisible by both 5 and 11",num);
    else
    printf("%d is not divisible by both 5 and 11",num);
    return 0;
}