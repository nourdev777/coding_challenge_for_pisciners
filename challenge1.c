#include <stdio.h>
int main() 
{
    int n = 6, f = 1, i = 1;
    while (i < n)
    {
        f *= i;
        i++;
    }
    printf("%d", f);
    return 0;
}

// Question: What will be printed on the screen?
// a) 120
// b) 720
// c) 100
// d) 24

// Answer: a) 120