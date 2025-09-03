#include <stdio.h>
int main() {
    int a = 0, b = 1, c, i = 1;
    while (i <= 4) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
        i++;
    }
    return 0;
}

// Question: What will be printed on the screen?
// a) 1 2 3 5
// b) 0 1 1 2
// c) 1 1 2 3
// d) 2 3 5 8

// Answer: a) 1 2 3 5