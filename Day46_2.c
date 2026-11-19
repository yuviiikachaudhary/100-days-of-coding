#include <stdio.h>

int main(void) {
    char str[256];
    int seen[26] = {0};
    char result = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            if (seen[ch - 'a']) {
                result = ch;
                break;
            }
            seen[ch - 'a'] = 1;
        }
    }

    if (result != '\0') {
        printf("First repeating character: %c\n", result);
    } else {
        printf("No repeating lowercase letter found.\n");
    }

    return 0;
}