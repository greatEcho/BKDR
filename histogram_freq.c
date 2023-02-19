#include <stdio.h>

#define ASCII_L 100 // ascii length
#define MAX_HEIGHT 20

void fill_zeros(float arr[], int len);

/* histogram of chars frequency */
int main()
{
    char c;
    float ascii[ASCII_L], nc;
    fill_zeros(ascii, ASCII_L);

    // read stdin until Ctrl+D will be given
    while ( (c=getchar()) != EOF) {
        ++ascii[c];
        ++nc;
    }

    // transform the number of chars to frequency normalized by MAX_HEIGHT
    for (int i = 0; i < ASCII_L; i++) {
        ascii[i] = (int) ascii[i] / nc / MAX_HEIGHT;
    }
    for (int i = 0; i < ASCII_L; i++) {
        printf("%d\n", ascii[i]);
    }

    // print histogram horizontally
    for (int i = 0; i < ASCII_L; i++) {
        printf("%c: ", ascii[i]);
        for (int j = 0; i < ascii[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("---\nDone\n---");


    return 0;
}

void fill_zeros(float arr[], int len)
{
    for (int i = 0; i < len; ++i) {
        arr[i] = 0;
    }
}
