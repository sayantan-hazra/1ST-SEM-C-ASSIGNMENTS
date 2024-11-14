/* Write a C program to calculate gross salary if salary is greater than 10000, DA is 10% of 
salary and HRA is 5% otherwise DA is 5% and HRA is 3% */

#include<stdio.h>
int main(){
    float salary,da,hra,grossSalary;
    printf("ENTER YOUR  SALARY: ");
    scanf("%f",&salary);
    if(salary>10000)
    {
        da=salary*10/100;
        hra=salary*5/100;
    }
    else
    {
        da=salary*5/100;
        hra=salary*3/100;
    }
    grossSalary=salary+da+hra;
    printf("YOUR GROSS SALARY IS %f",grossSalary);
    return 0;
}