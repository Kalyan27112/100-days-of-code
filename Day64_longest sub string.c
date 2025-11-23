#include <stdio.h>
#include <string.h>

int main() {
    char s[1000005];

    /* Read input string (line). If input may contain spaces, fgets is safer.
       If using interactive judge that provides no trailing newline, fgets still works. */
    if (!fgets(s, sizeof(s), stdin)) return 0;

    /* Remove trailing newline if present */
    size_t n = strlen(s);
    if (n > 0 && s[n - 1] == '\n') {
        s[--n] = '\0';
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int lastIndex[256];
    for (int i = 0; i < 256; i++) lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0; /* start index of current window */

    for (int i = 0; i < (int)n; i++) {
        unsigned char c = (unsigned char)s[i];
        if (lastIndex[c] >= start) {
            /* character repeated inside current window, move start */
            start = lastIndex[c] + 1;
        }
        lastIndex[c] = i;
        int curLen = i - start + 1;
        if (curLen > maxLen) maxLen = curLen;
    }

    printf("%d\n", maxLen);
    return 0;
}
