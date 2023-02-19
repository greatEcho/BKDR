#include <stdio.h>

#define IN 1 // in word
#define OUT 0 // out of word

/* count lines, words and symbols in standard input */
int main()
{
    int c, nl, nw, ns, state;
    nl = nw = ns = 0; // all counters go zero
    state = OUT;
    while ( (c=getchar()) != EOF) {
        ++ns;
        if ( c == ' ' || c == '\n' || c == '\t') {
            ++nw;
            state = OUT;

            if (c == '\n') {
                ++nl;
            }
        }
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("lines:\t\t%i;"
           "\nwords:\t\t%i;"
           "\nsymbols:\t%i\n.",
            nl, nw, ns);
    
    return 0;
}
