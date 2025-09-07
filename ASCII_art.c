#include <stdio.h>
#include <unistd.h>
int main() {
    int i = 0;
    while (i < 3)
     {
        printf("   ***   \n");
        printf("  *   *  \n");
        printf(" *Camel* \n");
        sleep(1);
        i++;
    }
    return 0;
}