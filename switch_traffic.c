/* Write a ‘C’ program that displays the recommended actions depending on the color of 
a traffic light using the switch statement. (using switch statement) */

#include<stdio.h>
int main()
{
    char light;
    printf("ENTER COLOUR OF TRAFFIC: ");
    scanf("%c",&light);

    switch(light) {
        case 'R':
        case 'r':
            printf("STOP! The light is red.\n");
            break;
        case 'G':
        case 'g':
            printf("GO! The light is green.\n");
            break;
        case 'Y':
        case 'y':
            printf("SLOW DOWN! The light is yellow.\n");
            break;
        default:
            printf("Invalid color entered! Please enter R, G, or Y.\n");
    }
    return 0;
}