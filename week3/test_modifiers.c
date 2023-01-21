/*  Test modifiers
*   Christian Rua
*   Jan 21, 2023
*/  

#include <stdio.h>

int main(void){
    double x = 0.123456789;
    printf("general Printing Ideas \n\n");
    printf("x is %-12.5e and %e and %10.5f and %10d\n\n", x,x,x,(int) x);
    return 0;
}