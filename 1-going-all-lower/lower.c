// PID: 730481481
// I pledge the COMP 211 honor code.
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>

int main() {
    int c;

    c = getchar();
    while (c != EOF) {
    if (c < 65 | c > 90) {
        putchar(c);
        c = getchar();
    }
    else {char b = c + 32;
        putchar(b);
        c = getchar();
    }
    }   
    }

