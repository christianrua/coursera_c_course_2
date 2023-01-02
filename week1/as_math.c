/*  As_math.c

    Use asserts within a trivial program
    Christian Rua
    Dic 27, 2022

*/

#include <assert.h>
#include <stdio.h>

int main(){
    double x, y;
    while(1){
        printf("Read in 2 floats:\n");
        scanf("%lf %lf", &x, &y);
        assert(y != 0);
        printf("When divided x/y = %lf\n", x/y);
    }
    return 0;
}