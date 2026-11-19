#include <stdio.h>

int main(void) {
    const char *s = "hello";

    for (int i = 0; s[i] != '\0'; i++) {
        printf("%c\n", s[i]);
    }

    return 0;
}