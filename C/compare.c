#include <stdio.h>

int len(char str []) {
    int l = 0;
    while (str[l] != '\0') {
        l++;
    }
    return l;
}

int main() {
    char str1[100];
    char str2[100];

    printf("string1: ");
    scanf("%[^\n]%*c", str1); // %[^\n] reads everything %*c discards the newline.

    printf("string2: ");
    scanf("%[^\n]%*c", str2);

    int len1 = len(str1);
    int len2 = len(str2);

    if (len1 != len2) {
        printf("not same\n");
        return 0;
    }
    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            printf("not same\n");
            return 0; 
        }
    }
    printf("same\n"); 
}