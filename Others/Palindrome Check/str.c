#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1001], clean[1001];
    int j = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            clean[j++] = tolower(str[i]);
        }
    }
    clean[j] = '\0';

    int len = j;
    int is_pal = 1;

    for (int i = 0; i < len / 2; i++) {
        if (clean[i] != clean[len - 1 - i]) {
            is_pal = 0;
            break;
        }
    }

    if (is_pal)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}