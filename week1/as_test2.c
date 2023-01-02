/* Assert.c

    Use asserts within a trivial program
    Christian Rua
    Dic 27, 2022
*/

#define NDEBUG //goes before <assert.h>
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main(){
    assert(0);
    printf("My program runs\n");
    return 0;
}