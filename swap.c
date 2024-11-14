/* Two numbers are input through the keyboard into two locations C and D. Write a program to 
interchange the contents of C and D. */


#include<stdio.h>
int main(){
    int C,D;
    printf("ENTER TWO NUMBERS FOR SWAPPING:\n");
    scanf("%d\n%d",&C,&D);

    C=C+D;
    D=C-D;
    C=C-D;
    printf("SWAPPED VALUE OF C IS %d AND D IS %d\n",C,D);
    return 0;
}