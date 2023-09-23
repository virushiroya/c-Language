/*
The value of d is: 12
*/


#include <stdio.h>

int main() {
    int a = 8;
    int b = 6;
    int c = 4;
    int d;

    d = a + (b - c) * a / c;

    printf("The value of d is: %d\n", d);

    return 0;
}
