#include <stdio.h>

void fill_zeros(int* arr, int len);

int main(void)
{
    int c, nwhite, nother;
    int ndigit[10];
    
    nwhite = nother = 0;
    fill_zeros(ndigit, 10);

    while ( (c=getchar()) != EOF) {
        if ( c >= '0' && c <= '9') {
            ++ndigit[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        }            
        else {
            ++nother;
        }
    }

    printf("digits =");
    for (int i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n",
            nwhite, nother);

    return 0;
}

// functions
void fill_zeros(int arr[], int len)
{
    for (int i = 0; i < len; i++) {
        arr[i] = 0;
    }
}
