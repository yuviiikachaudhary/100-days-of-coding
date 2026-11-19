#include <stdio.h>

int main(void) {
    char str[256];
    char target;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf(" %c", &target);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("'%c' appears %d time(s)\n", target, count);

    return 0;
}