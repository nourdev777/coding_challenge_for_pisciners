#include <stdio.h>
int main() {
    int i = 0, sum = 0;
    while (i <= 4) {
        sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}

// Question: What will be printed on the screen?
// a) 10
// b) 4
// c) 6
// d) 15

// Answer: a) 10