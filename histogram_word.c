#include <stdio.h>

#define IN  1
#define OUT 0
#define LIMIT 10000 // limit of words in stdin
#define MAX_WORD 10 // char limit for a word

void fill_zeros(int arr[], int len);
void print_hor(int word_len[], int i);
void print_vert(int word_len[], int i);

/* histogram with words length from stdin */
int main(void)
{
    char c;
    int i = 0, len_c = 0, state = OUT;
    int word_len[LIMIT]; 
    fill_zeros(word_len, LIMIT); 
    while ( (c=getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                state = OUT;
                word_len[i] = len_c;
                len_c = 0;
                ++i;
            }
        }
        else {
            ++len_c;
            if (state == OUT) {
            state = IN;
            }
        }
    }

    // print histogram
    //print_hor(word_len, i);
    print_vert(word_len, i);
    return 0;
}


void fill_zeros(int arr[], int len)
{
    for (int i = 0; i < len; i++) {
        arr[i] = 0;
    }
}

void print_hor(int word_len[], int i)
{
    for (int j = 0; j < i; ++j) {
        for (int k = 0; k < word_len[j]; ++k) {
             printf("*");
        }
        printf("\n");
    }
}

void print_vert(int word_len[], int i)
{
    // let limit for a word will be MAX_WORD
    for (int j = MAX_WORD; j > 0; j--) {
        for (int k = 0; k < i; k++) {
            if (j <= word_len[k]) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

