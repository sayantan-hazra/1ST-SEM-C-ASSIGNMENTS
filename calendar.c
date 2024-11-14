/* Write a C program to convert a given integer (in days) to years, months and days, assuming 
that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s) */


#include<stdio.h>
int main(){
    int days,years,months;

    printf("ENTER NUMBER OF DAYS: ");
    scanf("%d",&days);

    years=days/365;
    days%=365;

    months=days/30;
    days%=30;

    printf("%d Year(s)\n%d Month(s)\n%d Day(s)",years,months,days);
    return 0;
}