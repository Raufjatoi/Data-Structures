#include <stdio.h>

int len(char str[]) {
    int l = 0;
    while (str[l] != '\0') {
        l++;
    }
    return l;
}

int main() {
    char str[100];
    printf("string: ");
    scanf("%[^\n]%*c", str); // %[^\n] reads everything %*c discards the newline.

    printf("%d", len(str));
    return 0;
}