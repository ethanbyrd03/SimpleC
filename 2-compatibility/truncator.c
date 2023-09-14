// 730481481
// I pledge the COMP 211 honor code.

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# define IN 1
# define OUT 0

int main() {

    int c, nc, nl, no, cl, in;
    int noffenders[100];  
    
    c = getchar();
    nc = 0;
    nl = 0;
    no = 0;
    cl = 0;
    in = OUT;

    while (c != EOF) {
        if (c == '\n') {
            nc = 0;
            nl++;
            in = OUT;
            putchar(c);
            c = getchar();
            }
        else {
            if (nc >= 50) {
                if (in == OUT) {
                    putchar('\n');
                    noffenders[no] += nl;
                    no++;
                    cl++;
                    nc = 0;
                    in = IN;}
                else {
                    putchar('\n');
                    nc = 0;
                    in = IN;
                    }
                }
            else {
                nc++;
                putchar(c);
                c = getchar();
                }
             }
    
    }


    printf("%s%d\n", "Total lines over 50 char: ", cl);
    printf("%s", "Offending lines: ");
    for(int i = 0; i < no; i++) {
        printf(" %d,", noffenders[i]);
    }
    printf("\n"); 

}
