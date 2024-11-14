/* Write a C program that accepts two integers from the user and calculates the sum, difference, 
product, quotient and remainder of the two integers. */


#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER TWO NUMBERS:\n");
    scanf("%d\n%d",&a,&b);

    printf("SUM OF TWO NUMBERS: %d\n",a+b);
    printf("DIFFERENCE OF TWO NUMBERS: %d\n",a-b);
    printf("PRODUCT OF TWO NUMBERS: %d\n",a*b);
    printf("QUOTIENT OF TWO NUMBERS: %d\n",a/b);
    printf("REMAINDER OF TWO NUMBERS: %d\n",a%b);
    return 0;
}