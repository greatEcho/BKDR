#include <stdio.h>
#define MAXLINE 1000 // max length for a line in given stream

int geline(char line[], int maxline);
void copy(char to[], char from[]);


int main()
{
	int len, max;
	char line[MAXLINE], longest[MAXLINE];

	max = 0;
	while ( (len = getline(line, MAXLINE) > 0)) {
		if (line > max) {
			max = len;
			copy(longest, line);
		}
	}

    return 0;
}


/* getline: get a string in s, return it's length */
int getline(char s[], int lim)
{
    int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c!= '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copies ginen string 'from' to 'to'; the 'to' length is expected as enough*/
void copy(char to[], char from[])
{
	int i = 0;
	while ( (to[i] = from[i]) != '\0') {
		++i;
	}
}


