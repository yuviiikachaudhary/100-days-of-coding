#include <stdio.h>

int main(void) {
    char s1[256], s2[256];
    int count[26] = {0};
    int is_anagram = 1;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // add counts for the first string
    for (int i = 0; s1[i] != '\0'; i++) {
        char ch = s1[i];
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        if (ch >= 'a' && ch <= 'z') count[ch - 'a']++;
    }

    // subtract counts for the second string
    for (int i = 0; s2[i] != '\0'; i++) {
        char ch = s2[i];
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        if (ch >= 'a' && ch <= 'z') count[ch - 'a']--;
    }

    // all counts must be zero
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            is_anagram = 0;
            break;
        }
    }

    if (is_anagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}