#include <stdio.h>

// same as 1-6 
int main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    printf("EOF reached! %d", EOF);
}