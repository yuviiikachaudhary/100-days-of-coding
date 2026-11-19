#include <stdio.h>

int main(void) {
    char str[256];
    char longest[256] = "";
    int max_len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0') {
        // skip separators (space, newline, tab)
        while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            i++;
        }

        // measure the current word
        int start = i;
        int len = 0;
        while (str[i] != '\0' && str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            len++;
            i++;
        }

        // keep it if it's the longest so far
        if (len > max_len) {
            max_len = len;
            for (int k = 0; k < len; k++) {
                longest[k] = str[start + k];
            }
            longest[len] = '\0';
        }
    }

    if (max_len > 0) {
        printf("Longest word: %s (length %d)\n", longest, max_len);
    } else {
        printf("No words found.\n");
    }

    return 0;
}