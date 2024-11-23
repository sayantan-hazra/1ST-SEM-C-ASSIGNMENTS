/* (using if else if statement)
Grades of steel is assigned according to the following conditions:
1. Hardness must be > 50
2. Carbon content must be > 0.7
3. Tensile strength must be > 5500
The grades are as follows:
If all the conditions are met then Grade is 10.
If conditions 1 and 2 are met then Grade is 9.
If conditions 2 and 3 are met then Grade is 8.
If conditions 1 and 3 are met then Grade is 7.
If none of the conditions are met then Grade is 6.
Write a program that asks values of hardness, carbon content and tensile strength of 
the steel.
Output the Grade of steel. */

#include<stdio.h>
int main()
{
    int hardness,tensile;
    float carbon_content;
    printf("ENTER HARDNESS OF STEEL: ");
    scanf("%d",&hardness);
    printf("ENTER CARBON CONTENT OF STEEL: ");
    scanf("%f",&carbon_content);
    printf("ENTER TENSILE STRENGTH OF STEEL: ");
    scanf("%d",&tensile);

    if(hardness>50&&carbon_content>0.5&&tensile>5500)
    {
    printf("THE GRADE OF STEEL IS 10");
    }
    else if(hardness>50&&tensile>5500)
    {
    printf("THE GRADE OF STEEL IS 9");
    }
    else if(carbon_content>0.5&&tensile>5500)
    {
    printf("THE GRADE OF STEEL IS 8");
    }
    else if(hardness>50&&carbon_content>0.5)
    {
    printf("THE GRADE OF STEEL IS 7");
    }
    else
    {
    printf("THE GRADE OF STEEL IS 6");
    }
    return 0;
}