#include <stdio.h>

#define IN  1 // in word
#define OUT 0 // out of word
int main()
{
    int c;
    int state = OUT;
    while ( (c=getchar()) != EOF) {
        if ((state == IN) && (c == ' ' || c == '\n' || c == '\t')) {
            putchar('\n');
            state = OUT;
            continue;
        }
        else if (state == OUT) {
            state = IN;
        }
            putchar(c);

    }

    return 0;
}


