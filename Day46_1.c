#include <stdio.h>

int main(void) {
    char str[256];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        int is_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

        if (!is_vowel) {
            str[j++] = ch;
        }
    }
    str[j] = '\0';

    printf("Result: %s", str);

    return 0;
}