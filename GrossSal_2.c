/* Write a C program to input basic salary of an employee and calculate its Gross salary
according to following: 
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90% 
Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include<stdio.h>
int main(){
    float salary,da,hra,grossSalary;
    printf("ENTER YOUR  SALARY: ");
    scanf("%f",&salary);
    if(salary<=10000)
    {
        da=salary*20/100;
        hra=salary*80/100;
    }
    else if(salary<=20000)
    {
        da=salary*25/100;
        hra=salary*90/100;
    }
    else
    {
        da=salary*30/100;
        hra=salary*95/100;
    }
    grossSalary=salary+da+hra;
    printf("YOUR GROSS SALARY IS %f",grossSalary);
    return 0;
}