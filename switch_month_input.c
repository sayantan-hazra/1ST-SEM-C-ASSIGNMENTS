/* Write a program that takes as input an integer between 1-12 (both inclusive) and 
prints the month corresponding to that integer. (using switch statement) */

#include<stdio.h>
int main()
{
    int input;
    printf("ENTER A NUMBER BETWEEN (1-12): ");
    scanf("%d",&input);

    switch(input)
    {
    case 1:
        printf("THE CORRESPODING MONTH OF %d IS JANUARY",input);
        break;
    case 2:
        printf("THE CORRESPODING MONTH OF %d IS FEBRUARY",input);
        break;
    case 3:
        printf("THE CORRESPODING MONTH OF %d IS MARCH",input);
        break;
    case 4:
        printf("THE CORRESPODING MONTH OF %d IS APRIL",input);
        break;
    case 5:
        printf("THE CORRESPODING MONTH OF %d IS MAY",input);
        break;
    case 6:
        printf("THE CORRESPODING MONTH OF %d IS JUNE",input);
        break;    
    case 7:
        printf("THE CORRESPODING MONTH OF %d IS JULY",input);
        break;
    case 8:
        printf("THE CORRESPODING MONTH OF %d IS AUGUST",input);
        break;
    case 9:
        printf("THE CORRESPODING MONTH OF %d IS SEPTEMBER",input);
        break;
    case 10:
        printf("THE CORRESPODING MONTH OF %d IS OCTOBER",input);
        break;
    case 11:
        printf("THE CORRESPODING MONTH OF %d IS NOVEMBER",input);
        break;
    case 12:
        printf("THE CORRESPODING MONTH OF %d IS DECEMBER",input);
        break;
    default:
        printf("WRONG INPUT");
    }
    return 0;
}