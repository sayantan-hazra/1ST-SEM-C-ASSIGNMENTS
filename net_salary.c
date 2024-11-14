/* In an organization, 55% of basic salary is given as DA while HRA is 15 % of basic salary. PF 
is deducted at the rate of 12.5% of Gross Salary. Write a c program to calculate Net Salary. 
[Gross salary=basic+ DA+ HRA and Net Salary= Gross Salary – PF] */

#include<stdio.h>
int main(){
    float salary,da,hra,pf,gross_salary,net_salary;
    printf("ENTER YOUR  SALARY: ");
    scanf("%f",&salary);
    da=salary*55/100;
    hra=salary*15/100;
    gross_salary=salary+da+hra;
    pf=gross_salary*12.5/100;
    net_salary=gross_salary-pf;
    printf("YOUR NET SALARY IS %f",net_salary);
    return 0;
}