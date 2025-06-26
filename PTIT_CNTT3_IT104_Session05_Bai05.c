#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int left, int right) {
    if (left >= right)
        return 1;
    if (str[left] != str[right]) {
        return 0;
    }
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("Palindrome valid");
    } else {
        printf("Palindrome invalid");
    }
}
