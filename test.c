#include <stdlib.h>
#include <stdio.h>
void function(int a, int b, int c) {
    char buffer1[5];
    char buffer2[20];
    int i;
    for (i = 0; i < sizeof(buffer1); i++) {
        buffer1[i] = 'A';
    }
    for (i = 0; i < sizeof(buffer2) + 30; i++) {
        buffer2[i] = 0; 
    }
}
void main() {
    int x;
    x = 0;
    function(1,2,3);
    x = 1;
    printf("x=%d\n", x);
}
