#include <stdio.h>

int main(void) {
    char str[256];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length (and strip trailing newline)
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }
    str[len] = '\0';

    // swap characters from both ends
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed: %s\n", str);

    return 0;
}