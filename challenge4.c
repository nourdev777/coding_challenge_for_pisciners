#include <stdio.h>
int main() 
{
    int a = 48, b = 18, temp;
    while (b != 0) 
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d", a);
    return 0;
}

// Question: What will be printed on the screen?
// a) 6
// b) 18
// c) 48
// d) 12

// Answer: a) 6