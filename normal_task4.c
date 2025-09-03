#include <stdio.h>
int main() {
    char ch = 'A';
    int i = 0;
    while (i < 3) {
        printf("%c ", ch);
        ch++;
        i++;
    }
    return 0;
}

// Question: What will be printed on the screen?
// a) A B C
// b) A A A
// c) B C D
// d) A

// Answer: a) A B C