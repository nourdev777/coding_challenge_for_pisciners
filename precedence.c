#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("%d\n", a++ * ++b);
    return 0;
}
// A) 55
// B) 60
// C) 65
// D) Undefined behavior

// answer: a)55.  a++ gives 5, ++b gives 11. 5 * 11 = 55