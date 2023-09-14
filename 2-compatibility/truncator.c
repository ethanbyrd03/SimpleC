// PID: 730481481
// I pledge the COMP 211 honor code.

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# define IN 1
# define OUT 0

int main() {

    int c, numchars, numlines, numoff, cl, in;
    int noffenders[100];  
    
    c = getchar();
    numchars = 0;
    numlines = 0;
    numoff = 0;
    cl = 0;
    in = OUT;

    while (c != EOF) {
        if (c == '\n') {
            numchars = 0;
            numlines++;
            in = OUT;
            putchar(c);
            c = getchar();
            }
        else {
            if (numchars >= 50) {
                if (in == OUT) {
                    putchar('\n');
                    noffenders[numoff] += numlines;
                    numoff++;
                    cl++;
                    numchars = 0;
                    in = IN;}
                else {
                    putchar('\n');
                    numchars = 0;
                    in = IN;
                    }
                }
            else {
                numchars++;
                putchar(c);
                c = getchar();
                }
             }
    
    }

    printf("\n");
    printf("%s%d\n", "Total lines over 50 chars: ", cl);
    printf("%s", "Offending lines: ");
    for(int i = 0; i < numoff; i++) {
        printf(" %d,", noffenders[i]);
    }
    printf("\n"); 

}
