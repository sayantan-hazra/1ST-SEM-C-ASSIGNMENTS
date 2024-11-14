/* Write a C program to input temperature in Centigrade and convert to Fahrenheit. */

#include<stdio.h>
int main()
{
    int celsius;
    printf("ENTER TEMPERATURE IN CELSIUS: ");
    scanf("%d",&celsius);
    printf("CONVERTED VALUE OF Celsius to Fahrenheit= %d",(celsius*9/5)+32);
    return 0;
}