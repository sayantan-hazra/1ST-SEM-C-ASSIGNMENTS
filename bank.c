/* Write a C program to read an amount (integer value) and break the amount into the smallest 
possible number of bank notes.
Note: The possible banknotes are 100, 50, 20, 10, 5, 2 and 1.
Test Data :
Input the amount: 375
Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
0 Note(s) of 2.00
0 Note(s) of 1.00 */


#include<stdio.h>
int main(){
    int amount;
    printf("INPUT THE AMOUUNT: ");
    scanf("%d",&amount);

    printf("%d Note(s) of 100.00\n",amount/100);
    amount%=100;
    printf("%d Note(s) of 50.00\n",amount/50);
    amount%=50;
    printf("%d Note(s) of 20.00\n",amount/20);
    amount%=20;
    printf("%d Note(s) of 10.00\n",amount/10);
    amount%=10;
    printf("%d Note(s) of 5.00\n",amount/5);
    amount%=5;
    printf("%d Note(s) of 2.00\n",amount/2);
    amount%=2;
    printf("%d Note(s) of 1.00\n",amount);
    return 0;
}