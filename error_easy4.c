#include <stdio.h>
int square(int n) {
    n * n;
}
int main() {
    printf("%d", square(4));
    return 0;
}

// Question: What is the error in the code?

// Answer: a) Missing return statement in the square function