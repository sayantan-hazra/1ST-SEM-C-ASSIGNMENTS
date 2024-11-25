/* Write a program to check whether a number is prime or not. */

#include<stdio.h>
int main()
{
    int num,count=0;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        count++;
    }

    if(count==2)
    printf("IT IS A PRIME NUMBER");
    else
    printf("IT IS NOT A PRIME NUMBER");
    return 0;

}