/* Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches 
and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches */


#include<stdio.h>
int main()
{
    int length,breadth;
    length=7;
    breadth=5;
    printf("Perimeter of a rectangle is %d\n",2*(length+breadth));
    printf("Perimeter of a rectangle is %d",length*breadth);
    return 0;
}