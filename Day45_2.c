#include <stdio.h>

int main(void) {
    char str[256];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;   // lowercase -> uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;   // uppercase -> lowercase
        }
    }

    printf("Toggled: %s", str);

    return 0;
}