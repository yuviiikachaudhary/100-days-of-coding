#include <stdio.h>

int count_chars(const char *s) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

int main(void) {
    printf("%d\n", count_chars("hello world")); // 11
    return 0;
}