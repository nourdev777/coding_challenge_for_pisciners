#include <stdio.h>
int main() {
    int num = 4567, i = 0;
    while (num > 0) {
        i++;
        num /= 10;
    }
    printf("%d", i);
    return 0;
}

// Question: What will be printed on the screen?
// a) 4
// b) 5
// c) 3
// d) 4567

// Answer: a) 4